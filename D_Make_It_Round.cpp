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
    int m,n;
    cin>>m>>n;
    if(n<10)
    {
        if((m*5)%10 ==0)
        cout<<m*5<<endl;
        else
        cout<<m*n<<endl;
    }
    else
    {
        int x=n%5;
        x=n-x;
        if((m*x)%10==0)
        cout<<m*x<<endl;
        else
        {
            int y=x=n%10;
            y=y-x;
            cout<<m*y<<endl;
        }

    }

}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        solve();
    return 0;
}