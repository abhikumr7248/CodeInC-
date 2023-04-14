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
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    vector<int> p(n);
    for (auto &i : h)
        cin >> i;
    for (auto &i : p)
        cin >> i;
    vector<int> v(n);
    v = h;
    sort(v.begin(), v.end(), greater<int>());
    int x = 0;
    for (int i = 0; i < n; ++i)
    {
        if (h[i] == v[0])
        {
            x = i;
            break;
        }
    }
    int re = 0;
    while (h[x] > 0)
    {
        int mi=20;
        for (int i = 0; i < n; ++i)
        {
            h[i] -= k;
            if (h[i] <= 0)
                p[i] = 0;
        }
        for (int i = 0; i < n; ++i)
        {
            
            if (p[i] != 0)
            {
                if(p[i]<mi)
                mi=p[i];
            }
        }
        
        k -= mi;
        cout << mi << endl;
        if (k <= 0)
        {
            cout << "NO" << endl;
            re = 1;
            break;
        }
        for(int i=0;i<n;++i)
        cout<<h[i]<<" ";
        cout<<endl;
        for (int i = 0; i < n; ++i)
        cout << p[i] << " ";
        cout << endl;
    }
    if (re == 0)
        cout << "YES" << endl;
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