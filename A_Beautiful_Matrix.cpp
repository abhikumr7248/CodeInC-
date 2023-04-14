#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll signed long long
#define ld long double
/*------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int arr[5][5];
    int x=0,y=0;
    for(int i=0;i<5;++i)
    {
        for(int j=0;j<5;++j)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    cout<<abs(x-2)+abs(y-2);
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}