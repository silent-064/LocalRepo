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

void count_one_bit(int x,ll &sum) {
    ll cnt = 0;
    while(x>0) {
        x=x&(x - 1);
        cnt++;
    }
    sum += cnt;
}
void number1(int a) {
    ll sum = 0;
    for (int i = 1; i <= a; i++) {
        count_one_bit(i, sum);
    }
    cout<<sum<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;
    cin>>a;
    number1(a);
}
