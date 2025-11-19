/*
 * Author : Protic Prappo Durjoy
 * Date :
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
#define ll long long
const ll INF = 1e9 + 7;
const ll mod = 998244353;
using namespace std;
int dp[1005][1005]; 
// dp টেবিল — dp[i][j] মানে X-এর প্রথম i অক্ষর এবং Y-এর প্রথম j অক্ষরের মধ্যে LCS এর দৈর্ঘ্য

int lcs(string X, string Y) {

    int m = X.length(); // X স্ট্রিং-এর দৈর্ঘ্য
    int n = Y.length(); // Y স্ট্রিং-এর দৈর্ঘ্য

    // dp টেবিল পূরণ শুরু
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {

            // যদি দুই স্ট্রিং-এর বর্তমান অক্ষর সমান হয়
            if (X[i - 1] == Y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1]; 
                // diagonal থেকে ১ যোগ হবে (কারণ match হয়েছে)

            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                // match না হলে উপরের বা বামদিকের cell এর বড় মান নেওয়া হবে
        }
    }

    return dp[m][n]; // পুরো LCS এর লেন্থ
}
bool next_balanced_sequence(string & s) {
    int n = s.size();
    int depth = 0;

    // ডান দিক থেকে কোথায় পরিবর্তন করা যায় সেটা খুঁজছি
    for (int i = n - 1; i >= 0; i--) {

        // ')' পেলে depth বাড়ে, '(' পেলে depth কমে
        if (s[i] == '(')
            depth--;
        else
            depth++;

        // এমন একটি '(' খুঁজছি যেটাকে ')' করলে balanced suffix বানানো যায়
        if (s[i] == '(' && depth > 0) {

            depth--;

            // বাকি অংশে কতগুলো '(' ও কতগুলো ')' থাকা উচিত
            int open = (n - i - 1 - depth) / 2;
            int close = n - i - 1 - open;

            // নতুন next balanced sequence তৈরি
            string next = s.substr(0, i) + ')' 
                        + string(open, '(') 
                        + string(close, ')');

            s.swap(next);
            return true;
        }
    }

    return false; // আর কোনো next sequence নেই
}
#include<bits/stdc++.h>
using namespace std;

const int N = 3e5 + 9;
const int LG = 18;

/*
  ------------------------------------------------------------
    SA-IS অ্যালগরিদম: O(n) টাইমে suffix array তৈরি করে
    induced_sort(), SA_IS() এ এর মূল implementation
  ------------------------------------------------------------
*/

void induced_sort(const vector<int> &vec, int val_range, 
                  vector<int> &SA, const vector<bool> &sl, 
                  const vector<int> &lms_idx) {

  vector<int> l(val_range, 0), r(val_range, 0);

  // প্রতিটি ক্যারেক্টারের কাউন্ট নেওয়া
  for (int c : vec) {
    if (c + 1 < val_range) ++l[c + 1];
    ++r[c];
  }

  // prefix sum তৈরি → bucket এর boundary পাওয়া
  partial_sum(l.begin(), l.end(), l.begin());
  partial_sum(r.begin(), r.end(), r.begin());

  fill(SA.begin(), SA.end(), -1);

  // প্রথমে LMS substring গুলোকে বসানো
  for (int i = lms_idx.size() - 1; i >= 0; --i)
    SA[--r[vec[lms_idx[i]]]] = lms_idx[i];

  // L type সঠিক bucket এ বসানো
  for (int i : SA)
    if (i >= 1 && sl[i - 1]) {
      SA[l[vec[i - 1]]++] = i - 1;
    }

  // R bucket reset
  fill(r.begin(), r.end(), 0);
  for (int c : vec)
    ++r[c];
  partial_sum(r.begin(), r.end(), r.begin());

  // শেষে S type বসানো
  for (int k = SA.size() - 1, i = SA[k]; k >= 1; --k, i = SA[k])
    if (i >= 1 && !sl[i - 1]) {
      SA[--r[vec[i - 1]]] = i - 1;
    }
}

/*
  ------------------------------------------------------------
    SA-IS: মূল suffix array construction
  ------------------------------------------------------------
*/
vector<int> SA_IS(const vector<int> &vec, int val_range) {
  const int n = vec.size();
  vector<int> SA(n), lms_idx;
  vector<bool> sl(n);

  // L-type / S-type নির্ধারণ
  sl[n - 1] = false;
  for (int i = n - 2; i >= 0; --i) {
    sl[i] = (vec[i] > vec[i + 1] || (vec[i] == vec[i + 1] && sl[i + 1]));
    if (sl[i] && !sl[i + 1]) lms_idx.push_back(i + 1);
  }
  reverse(lms_idx.begin(), lms_idx.end());

  induced_sort(vec, val_range, SA, sl, lms_idx);

  // LMS substring এর rank তৈরি
  vector<int> new_lms_idx(lms_idx.size()), lms_vec(lms_idx.size());
  for (int i = 0, k = 0; i < n; ++i)
    if (!sl[SA[i]] && SA[i] >= 1 && sl[SA[i] - 1]) {
      new_lms_idx[k++] = SA[i];
    }

  int cur = 0;
  SA[n - 1] = cur;

  // প্রতিটি LMS substring compare করে নতুন rank দেওয়া
  for (size_t k = 1; k < new_lms_idx.size(); ++k) {
    int i = new_lms_idx[k - 1], j = new_lms_idx[k];
    if (vec[i] != vec[j]) {
      SA[j] = ++cur;
      continue;
    }
    bool flag = false;
    for (int a = i + 1, b = j + 1;; ++a, ++b) {
      if (vec[a] != vec[b]) {
        flag = true;
        break;
      }
      if ((!sl[a] && sl[a - 1]) || (!sl[b] && sl[b - 1])) {
        flag = !((!sl[a] && sl[a - 1]) && (!sl[b] && sl[b - 1]));
        break;
      }
    }
    SA[j] = (flag ? ++cur : cur);
  }

  // compact rank array তৈরি
  for (size_t i = 0; i < lms_idx.size(); ++i)
    lms_vec[i] = SA[lms_idx[i]];

  // rank কম হলে recursive SA-IS কল
  if (cur + 1 < (int)lms_idx.size()) {
    auto lms_SA = SA_IS(lms_vec, cur + 1);
    for (size_t i = 0; i < lms_idx.size(); ++i) {
      new_lms_idx[i] = lms_idx[lms_SA[i]];
    }
  }

  // final induced sort
  induced_sort(vec, val_range, SA, sl, new_lms_idx);
  return SA;
}

/*
  ------------------------------------------------------------
    স্ট্রিং → ভেক্টর → SA-IS → suffix array
  ------------------------------------------------------------
*/
vector<int> suffix_array(const string &s, const int LIM = 128) {
  vector<int> vec(s.size() + 1);
  copy(begin(s), end(s), begin(vec));
  vec.back() = '!'; // sentinel character

  auto ret = SA_IS(vec, LIM);
  ret.erase(ret.begin()); // sentinel remove
  return ret;
}

/*
  ------------------------------------------------------------
    SuffixArray ক্লাস: SA + LCP + Sparse Table
  ------------------------------------------------------------
*/
struct SuffixArray {
  int n;
  string s;
  vector<int> sa, rank, lcp;
  vector<vector<int>> t; // RMQ sparse table
  vector<int> lg;        // log precompute

  SuffixArray() {}
  SuffixArray(string _s) {
    n = _s.size();
    s = _s;

    // suffix array তৈরি
    sa = suffix_array(s);

    // প্রতিটি suffix এর rank
    rank.resize(n);
    for (int i = 0; i < n; i++) 
      rank[sa[i]] = i;

    // LCP তৈরি
    costruct_lcp();

    // sparse table precompute
    prec();

    // sparse table build
    build();
  }

  /*
    Kasai algorithm: O(n) এ LCP তৈরি
  */
  void costruct_lcp() {
    int k = 0;
    lcp.resize(n - 1, 0);

    for (int i = 0; i < n; i++) {
      if (rank[i] == n - 1) {
        k = 0;
        continue;
      }
      int j = sa[rank[i] + 1];

      while (i + k < n && j + k < n && s[i + k] == s[j + k])  
        k++;

      lcp[rank[i]] = k;
      if (k)  k--;
    }
  }

  void prec() {
    lg.resize(n, 0);
    for (int i = 2; i < n; i++) 
      lg[i] = lg[i / 2] + 1;
  }

  /*
    Sparse Table build লcp array এর উপর
  */
  void build() {
    int sz = n - 1;
    t.resize(sz);

    for (int i = 0; i < sz; i++) {
      t[i].resize(LG);
      t[i][0] = lcp[i];
    }

    for (int k = 1; k < LG; ++k) {
      for (int i = 0; i + (1 << k) - 1 < sz; ++i) {
        t[i][k] = min(t[i][k - 1], t[i + (1 << (k - 1))][k - 1]);
      }
    }
  }

  /*
    RMQ: lcp[l..r] এর minimum বের করা
  */
  int query(int l, int r) {
    int k = lg[r - l + 1];
    return min(t[l][k], t[r - (1 << k) + 1][k]);
  }

  /*
    দুইটি suffix (i, j) এর LCP বের করা
  */
  int get_lcp(int i, int j) {
    if (i == j) return n - i;

    int l = rank[i], r = rank[j];
    if (l > r) swap(l, r);

    return query(l, r - 1);
  }

  /*
    substring search: lower_bound
  */
  int lower_bound(string &t) {
    int l = 0, r = n - 1, k = t.size(), ans = n;
    while (l <= r) {
      int mid = l + r >> 1;

      if (s.substr(sa[mid], min(n - sa[mid], k)) >= t)
        ans = mid, r = mid - 1;
      else 
        l = mid + 1;
    }
    return ans;
  }

  /*
    substring search: upper_bound
  */
  int upper_bound(string &t) {
    int l = 0, r = n - 1, k = t.size(), ans = n;
    while (l <= r) {
      int mid = l + r >> 1;

      if (s.substr(sa[mid], min(n - sa[mid], k)) > t)
        ans = mid, r = mid - 1;
      else 
        l = mid + 1;
    }
    return ans;
  }

  /*
    substring এর occurrence range বের করা
    (SA এর index range)
  */
  pair<int, int> find_occurrence(int p, int len) {
    p = rank[p];
    pair<int, int> ans = {p, p};

    // বামে extend
    int l = 0, r = p - 1;
    while (l <= r) {
      int mid = l + r >> 1;
      if (query(mid, p - 1) >= len) 
        ans.first = mid, r = mid - 1;
      else 
        l = mid + 1;
    }

    // ডানে extend
    l = p + 1, r = n - 1;
    while (l <= r) {
      int mid = l + r >> 1;
      if (query(p, mid - 1) >= len) 
        ans.second = mid, l = mid + 1;
      else 
        r = mid - 1;
    }

    return ans;
  }
};

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;

  SuffixArray sa(s);

  // suffix array print করা
  for (int i = 0; i < s.size(); i++) 
    cout << sa.sa[i] << '\n';

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

/*
-------------------------------------
   Suffix Automaton (SAM) Template
   — বাংলা কমেন্ট সহ ICPC Ready —
-------------------------------------

মূল কাজ:
  ✔ কোন substring আছে কিনা
  ✔ substring কয়বার আছে
  ✔ মোট কটি unique substring আছে
  ✔ longest repeated substring (easily)

state properties:
 len = এই state যে substring group represent করে তার largest length
 link = suffix link (পরের ছোট group)
 nxt = transitions (character → next state)
 firstpos = প্রথম occurrence এর ending index
-------------------------------------
*/

struct SuffixAutomaton {
    struct State {
        int len, link;
        map<char,int> nxt;
        int firstpos;
    };

    vector<State> st;
    vector<long long> occ;   // state-এর occurrence count (DP দিয়ে fill হবে)
    int last;                // সর্বশেষ যোগ হওয়া state-এর index

    SuffixAutomaton(int n) {
        st.resize(2*n);
        occ.assign(2*n, 0);
        st[0].len = 0;
        st[0].link = -1;
        last = 0;
        sz = 1;
    }

    int sz;

    // নতুন character যোগ করা
    void extend(char c) {
        int cur = sz++;
        st[cur].len = st[last].len + 1;
        st[cur].firstpos = st[cur].len;
        occ[cur] = 1;  // শুরুতে প্রত্যেক state 1 বার occur করে

        int p = last;
        while (p != -1 && !st[p].nxt.count(c)) {
            st[p].nxt[c] = cur;
            p = st[p].link;
        }

        if (p == -1) {
            st[cur].link = 0;
        } 
        else {
            int q = st[p].nxt[c];
            if (st[p].len + 1 == st[q].len) {
                st[cur].link = q;
            } 
            else {
                int clone = sz++;
                st[clone] = st[q];
                st[clone].len = st[p].len + 1;

                while (p != -1 && st[p].nxt[c] == q) {
                    st[p].nxt[c] = clone;
                    p = st[p].link;
                }

                st[q].link = st[cur].link = clone;
            }
        }

        last = cur;
    }

    // সম্পূর্ণ string build করা
    void build(string &s) {
        for (char c : s) extend(c);

        // occurrence count propagate করতে (topological order)
        vector<int> order(sz);
        for (int i=0; i<sz; i++) order[i] = i;
        sort(order.begin(), order.end(), [&](int a, int b){
            return st[a].len > st[b].len;
        });

        for (int v : order) {
            if (st[v].link != -1)
                occ[st[v].link] += occ[v];
        }
    }

    // একটি substring s আছে কিনা?
    bool exists(const string &p) {
        int v = 0;
        for (char c : p) {
            if (!st[v].nxt.count(c)) return false;
            v = st[v].nxt[c];
        }
        return true;
    }

    // substring p কয়বার আছে?
    long long count_occ(const string &p) {
        int v = 0;
        for (char c : p) {
            if (!st[v].nxt.count(c)) return 0;
            v = st[v].nxt[c];
        }
        return occ[v];
    }

    // মোট unique substring সংখ্যা
    long long unique_substrings() {
        long long ans = 0;
        for (int i = 1; i < sz; i++) {
            ans += st[i].len - st[st[i].link].len;
        }
        return ans;
    }
};

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        SuffixAutomaton sam(s.size());
        sam.build(s);

        cout << "Unique substrings = " << sam.unique_substrings() << "\n";

        // Example:
        // কতবার substring আসে?
        // cout << sam.count_occ("aba") << "\n";

        // substring আছে কিনা?
        // cout << (sam.exists("abc") ? "YES" : "NO") << "\n";
    }
    return 0;
}

