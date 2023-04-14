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
    int n,a=0,b=0,c=0,ans;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int s;
        cin >> s;
        if (s == 1) 
        {
            a++;
        }
        else if (s == 2)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    //cout<<a<<" "<<b<<" "<<c<<endl;
    ans = max(a, max(b, c)); 
    ans = n - ans;
    cout<<ans;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
         solve();
    return 0;
}