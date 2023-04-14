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
    /*if(n==4 || n==5)
    cout<<pow(2,n)-2;
    else
    cout<<pow(2,n)-1;*/
    int res = 0;
    for (int i = 1; i < n; ++i)
    {
        res += i * (n - i);
    }
    cout << res + n;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}