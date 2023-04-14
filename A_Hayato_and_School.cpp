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
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<n;++i)
    cin >> arr[i];

    int cnt = 0;
    for(int i=0;i<n;++i) 
    cnt += arr[i] % 2;
    if (cnt < 3 && ((n - cnt) < 2 || cnt == 0))
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        if (cnt >= 3)
        {
            int rem = 3;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 && rem)
                {
                    cout << i + 1 << ' ';
                    rem--;
                }
            }
        }
        else
        {
            int rem0 = 2, rem1 = 1;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 && rem1)
                {
                    cout << i + 1 << ' ';
                    rem1--;
                }
                else if (arr[i] % 2 == 0 && rem0)
                {
                    cout << i + 1 << ' ';
                    rem0--;
                }
            }
        }
        cout << endl;
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