/*
 * Author : Protic Prappo Durjoy
 * Date : 23/3/25
 */
#include<bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
using namespace std;
int main()
{    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
int z,i;
cin>>z;
while(z--)
{
    string s1;
    cin >> s1;  
    int x = s1.size();


    string a = "";
    for (int i = 0; i < 2 * x; i++) {
        a += (i % 2 == 0) ? '(' : ')';
    }

  
    string b = string(x, '(') + string(x, ')');

    
    if (a.find(s1) == string::npos) {
        yes;
        cout << a << endl;
    } 
    
    else if (b.find(s1) == string::npos) {
        yes;
        cout << b << endl;
    } 
    else {
        no;
    }
}











    return 0;
}