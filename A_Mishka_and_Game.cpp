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
    int r1=0;
    int r2=0;
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
    int a, b;
    cin >> a >> b;
    if (a > b)
        r1++;
    if (a < b)
        r2++;
    }
if (r1 > r2)
    cout << "Mishka";
else if (r1 < r2)
    cout << "Chris";
else
    cout << "Friendship is magic!^^";
    
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