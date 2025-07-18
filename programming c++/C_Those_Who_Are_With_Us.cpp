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
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i,j;
    cin >> a;
    while (a--)
    {int b,c;
        cin>>b>>c;
        ll arr[b][c];
        ll maxu=0;
        ll total=0;
        for(i=0; i<b; i++)
        {
            for(j=0; j>c; j++)
            {
                cin>>arr[i][j];
                maxu=max(maxu,arr[i][j]);
                if(maxu==arr[i][j])
            }
        }
        for(i=0; i<b; i++)
        {
            for(j=0; j<b; j++)
            {
                if(maxu==arr[i][j])total++;
            }
            
        }
        for(i=0; i<b; i++)
        {
            for(j=0; j<b; j++)
            {
                
            }
            
        }





    }
}