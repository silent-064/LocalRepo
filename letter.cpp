/*
 * Author : Protic Prappo Durjoy
 * Date : 
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false),cin.tie(0);
int a,b;
cin>>a>>b;

    cin >> a >> b;

    vector<string> grid(a);
    for (int i = 0; i < a; i++) {
        cin >> grid[i]; 
    }

    int minRow = a, maxRow = 0, minCol = b, maxCol = 0;

    // পুরো গ্রিড স্ক্যান করি
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (grid[i][j] == '*') {  
                minRow = min(minRow, i); 
                maxRow = max(maxRow, i);  
                minCol = min(minCol, j);  
                maxCol = max(maxCol, j);  
            }
        }
    }

    for (int i = minRow; i <= maxRow; i++) {
        for (int j = minCol; j <= maxCol; j++) {
            cout << grid[i][j]; 
        }
        cout << endl;
    }






    return 0;
}