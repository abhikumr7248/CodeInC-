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
    int x,y,z,w;
    cin>>x>>y>>z>>w;
    /*int p=min(x,y);
    int q=max(z,w);
    int a=max(x,y);
    int b=min(z,w);
    int t1 = max(abs(p - b), abs(q - a));
    int t2 = max(t1, abs(a - b));
    int t3 = max(t3, abs(p - q));
    cout<<t3;*/
    int t = abs(x - z);
    int r = abs(y - w);
    //cout<<t<<" "<<r<<" ";
    cout<< max(t,r);
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