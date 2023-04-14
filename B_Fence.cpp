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
    int n,k;
    
    cin >> n >> k;
    vector<int> a(n), b;
    for(auto &i: a)
        cin >>i;
    for (int i = 1; i <= n; i++)
        b[i] = b[i - 1] + a[i];
    int p = 0;
    for (int i = 1; i <= n - k; i++)
        if (b[i + k] - b[i] < b[p + k] - b[p])
            p = i;
    cout << p + 1;
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