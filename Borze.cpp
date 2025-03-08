/*
 * Author : Protic Prappo Durjoy
 * Date : 3/7/25
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false),cin.tie(0);
string a;
cin>>a;
string result="";
int i=0;
for (i=0; i<a.size(); )
{

    if (a[i] == '.') {
        result += '0';
        i++; 
    }
    else if (a[i] == '-') {
        if (a[i + 1] == '.') {
            result += '1';
            i += 2; 
        }
        else if (a[i + 1] == '-') {
            result += '2'; 
            i += 2; 
        }
    
}




}

cout << result << endl;





    return 0;
}