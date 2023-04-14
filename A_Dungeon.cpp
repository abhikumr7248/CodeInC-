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
    int a,b,c;
    cin>>a>>b>>c;
    /*if(a>0)
    a=a-1;
    if(b>0)
    b=b-1;
    if(c>0)
    c=c-1;
    int z=a+b+c;
    if(z-7==-1 ||z-7==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;/**/
    int sum = a + b + c;
    sum -= 9;
    if (sum < 0 or sum % 9 != 0)
        cout << "NO"<<endl;
    else
    {
        int x = sum / 9;
        if (a > x and b > x and c > x)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
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