#include<bits/stdc++.h>
using namespace std;

const int N = 3e5 + 9;

// ----------------------------------------------
// LPS array তৈরি করার ফাংশন
// LPS: longest proper prefix যেটা suffix এর সাথে মিলে
// lps[i] = pattern এর 0..i substring এ সবচেয়ে বড় prefix-suffix এর দৈর্ঘ্য
// ----------------------------------------------
vector<int> build_lps(string p) {
  int sz = p.size();
  vector<int> lps;
  lps.assign(sz + 1, 0); // সকলকে শূন্য দিয়ে initialize
  int j = 0;             // j = prefix pointer
  lps[0] = 0;            // প্রথম অক্ষরে কোন prefix-suffix নেই

  for(int i = 1; i < sz; i++) {
    // mismatch হলে prefix কে ছোট করা হবে
    while(j >= 0 && p[i] != p[j]) {
      if(j >= 1) j = lps[j - 1]; // আগের prefix boundary তে যাওয়া
      else j = -1;               // পুরো mismatch, তাই -1
    }
    j++;             // এখন অক্ষর match হয়েছে
    lps[i] = j;      // prefix-suffix এর দৈর্ঘ্য সেট করা
  }
  return lps;
}

vector<int> ans; // সব match এর index রাখবে

// ----------------------------------------------
// মূল KMP matching ফাংশন
// s = text/string
// p = pattern
// lps = prefix array
// ----------------------------------------------
void kmp(vector<int> lps, string s, string p) {
  int psz = p.size(), sz = s.size();
  int j = 0; // pattern pointer

  for(int i = 0; i < sz; i++) {
    // mismatch হলে pattern pointer কমানো
    while(j >= 0 && p[j] != s[i]) {
      if(j >= 1) j = lps[j - 1];   // prefix এর আগের অবস্থায় যাওয়া
      else j = -1;                // mismatch হলে -1
    }

    j++; // character match হয়েছে

    // সম্পূর্ণ pattern match হলে
    if(j == psz) {
      // match শেষ হয়েছে index (i - psz + 1) থেকে
      ans.push_back(i - psz + 1);

      // নতুন করে matching শুরু করার boundary
      j = lps[j - 1];
    }
  }
}

// ----------------------------------------------
// main function
// ----------------------------------------------
int main() {
  int i, j, k, n, m, t;
  cin >> t;  // test case input

  while(t--) {
    string s, p;
    cin >> s >> p; // text ও pattern ইনপুট

    vector<int> lps = build_lps(p); // LPS তৈরি
    kmp(lps, s, p);                 // KMP চালানো

    if(ans.empty()) cout << "Not Found\n";
    else {
      cout << ans.size() << endl;  // মোট কয়বার পাওয়া গেছে
      for(auto x : ans) cout << x << ' '; // যে index গুলোতে match
      cout << endl;
    }

    ans.clear();      // পরের test-case এর জন্য clear করা
    cout << endl;
  }
  return 0;
}
