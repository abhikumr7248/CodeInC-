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
    char c,d;
    int h1,m1,h2,m2;
    cin>>h1>>c>>m1;
    cin>>h2>>d>>m2;
    int t = ((h1 * 60 + m1) + (h2 * 60 + m2)) / 2;
    //cout<<t/60<<":"<<t%60;
    printf("%02d:%02d", t / 60, t % 60);
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
        solve();
    return 0;
}