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
    vector<int> v(n);
    for(auto &i: v)
    cin>>i;
    int x=*min_element(v.begin(),v.end());
    int z=x*2;
    z=z-1;
    int count=0;
    for(int i=0;i<n;++i)
    {
        if(v[i]>z)
        {
            if(v[i]%z!=0)
           count=count+v[i]/z;
           else
           count = count + v[i] / z-1;
        }
    }
    cout<<count<<endl;

}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        solve();
    return 0;
}