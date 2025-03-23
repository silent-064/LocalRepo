/*
 * Author : Protic Prappo Durjoy
 * Date : 
 */
#include<bits/stdc++.h>
#define endl "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ft float
#define du double
#define ull unsigned long long
using namespace std;
void printvec(vector<pair<int,int>>vec,int n){
//cout<<vec.size()<<endl;
for(int i=0; i<n; i++)
{
    cout<<vec[i].first<<" "<<vec[i].second<<endl;
}
cout<<endl;
}
int main()
{    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
vector<pair<int,int>>vec;
int n;
cin>>n;
for(int i=0; i<n; i++)
{
    int x,y;
    cin>>x>>y;
    vec.push_back({x,y});
}

printvec(vec,n);




    return 0;
}