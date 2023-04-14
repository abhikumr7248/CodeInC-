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
    int n;
    cin>>n;
    int x;
    int a=0,b=0;
    for(int i=0;i<n;++i)
    {
        cin>>x;
        if(x%2==0)
        cout<<x/2<<endl;
        else
        {
            if(x<0)
            {
                if(a%2==0)
                cout<<x/2<<endl;
                else
                cout<<(x/2)-1<<endl;
                a++;
            }
            else
            {
                if(b%2==0)
                cout<<x/2<<endl;
                else
                cout<<(x/2)+1<<endl;
                b++;
            }
        }
    }
    
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}