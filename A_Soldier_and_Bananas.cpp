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
    int n,k,w;
    cin>>k>>n>>w;
    int s=0;
    for(int i=1;i<=w;++i)
    s+=i;
    int a=k*s;
    if((a-n)<0)
    cout<<0;
    else
    cout<<a-n;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
        solve();
    return 0;
}