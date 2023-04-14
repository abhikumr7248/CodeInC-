#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll signed long long
#define ld long double
#define to_low(s) transform(s.begin(), s.end(), s.begin(), ::tolower); // convert string to lowercase
#define to_up(s) transform(s.begin(), s.end(), s.begin(), ::toupper);  // convert string to uppercase
/*------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    int n;
    cin>>n;
    if(n<3)
    cout<<"No"<<endl;
    else
    {
        cout<<"Yes"<<endl;
        int k;
        if (n % 2 == 0)
            k = n / 2;
        else
        {
            k=(n+1)/2;
        }
        cout<<1<<" "<<k<<endl;
        cout<<n-1<<" ";
        for(int i=1;i<=n;++i)
        {
            if(k!=i)
            cout<<i<<" ";
        }
    }
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
        solve();
    return 0;
}