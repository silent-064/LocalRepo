/*
 * Author : Protic Prappo Durjoy
 * Date : 12/3/25
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false),cin.tie(0);

    
    vector<int> v(4); 

    for (int i = 0; i < 4; i++) {
        cin >> v[i];
    }

    //1 2 3 4
    sort(v.begin(), v.end());
  
        if(v[0] + v[1] > v[2] || v[1] + v[2] > v[3] || v[0] + v[2] > v[3])
        {
            cout<<"TRIANGLE\n";
        }
        else if(v[0]+v[1]==v[2] || v[1]+v[2]==v[3] || v[2]+v[3]==v[1])
        {
            cout<<"SEGMENT\n";
        }
        else{
            cout<<"IMPOSSIBLE\n";
        }
    








    return 0;
}