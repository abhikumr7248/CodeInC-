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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto &i: v)
    cin>>i;
    int sum=1;
    int j=0;
    while(sum<k)
    {
        sum=sum+v[j];
        j=sum-1;
    }
    if(sum==k)
    cout<<"YES";
    else
    cout<<"NO";

}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}