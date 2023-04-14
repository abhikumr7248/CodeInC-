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
    int a[2][2];
    cin >> a[0][0] >> a[0][1] >> a[1][0] >> a[1][1];
    int c=0,d=0;
    for(int i=0;i<2;++i)
    {
        if(a[c][d]<a[i][0])
        {
            c=i;
            d=0;
        }
        if (a[c][d] < a[i][1])
        {
            c = i;
            d = 1;
        }
    }
    int temp;
    if(c==0 && d==0)
    {
        temp=a[1][1];
        a[1][1]=a[0][0];
        a[0][0]=temp;
        temp = a[0][1];
        a[0][1] = a[1][0];
        a[1][0] = temp;
    }
    if (c == 1 && d == 0)
    {
        temp = a[1][1];
        a[1][1] = a[1][0];
        a[1][0] = a[0][0];
        a[0][0] = a[0][1];
        a[0][1] = temp;
    }
    if (c == 0 && d == 1)
    {
        temp = a[1][1];
        a[1][1] = a[0][1];
        a[0][1] = a[0][0];
        a[0][0] = a[1][0];
        a[1][0] = temp;
    }
    if (a[0][0] < a[0][1] && a[1][0] < a[1][1] && a[0][0] < a[1][0] && a[0][1] < a[1][1])
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
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