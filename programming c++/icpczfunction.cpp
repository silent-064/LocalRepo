#include<bits/stdc++.h>
using namespace std;

// ---------------------------------------------------------
// Z-Function কি করে?
// Z[i] = s[0..] এর সাথে s[i..] এর মিল থাকা substring এর দৈর্ঘ্য
// অর্থাৎ s[0..z[i]-1] == s[i..i+z[i]-1]
// Z[0] অর্থহীন, সাধারণত 0 রাখা হয়।
//
// সময় জটিলতা: O(n)
// ---------------------------------------------------------

vector<int> z_function(string s) {
  int n = (int)s.length();
  vector<int> z(n);

  // l, r = এমন একটি রেঞ্জ রাখে যেখানে s[l..r] হচ্ছে prefix এর সাথে মিল
  // প্রথমে l = r = 0
  for(int i = 1, l = 0, r = 0; i < n; i++) {

    // --- Case 1: i যদি [l..r] এর মধ্যে পড়ে,
    // তাহলে z[i] এর minimum value নির্ধারণ করা যায় আগের তথ্য দিয়ে
    if(i <= r)
      z[i] = min(r - i + 1, z[i - l]);

    // --- Case 2: এখন i থেকে match বাড়ানোর চেষ্টা
    // s[z[i]] == s[i+z[i]] হলে z[i] বাড়বে
    while(i + z[i] < n && s[z[i]] == s[i + z[i]])
      z[i]++;

    // --- যদি নতুন ম্যাচ আগের r থেকে বড় পর্যন্ত যায়,
    // তাহলে নতুন l এবং r আপডেট করতে হবে
    if(i + z[i] - 1 > r) {
      l = i;
      r = i + z[i] - 1;
    }
  }

  return z;
}

int32_t main() {
  string s;
  cin >> s;

  vector<int> ans = z_function(s);

  // সব Z-মান প্রিন্ট করা
  for(auto x : ans) cout << x << ' ';
  return 0;
}
