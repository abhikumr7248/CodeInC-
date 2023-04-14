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
#define to_low(s) transform(s.begin(), s.end(), s.begin(), ::tolower); // convert string to lowercase
#define to_up(s) transform(s.begin(), s.end(), s.begin(), ::toupper);  // convert string to uppercase
/*------------------------------------------------------------------------------------------------------------------------------*/
class Solution
{
private:
    int n,q;

public:
    void input()
    {
        cin>>n>>q;
    }
    void solve()
    {
        vector<int> a(n), b(n, 0);
        for (int &i : a)
            cin >> i;

        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            if (!i)
                b[i] = a[i];
            else
                b[i] = b[i - 1] + a[i];
            sum += a[i];
        }

        while(q>0)
        {
            int l;
            cin >> l;
            int r;
            cin >> r;
            int k;
            cin >> k;
            int check = 0;
            if (l == 1)
            {
                check = sum - b[r - 1] + k * (r - l + 1);
            }
            else
            {
                check = sum - (b[r - 1] - b[l - 2]) + k * (r - l + 1);
            }

            if (check & 1)
                cout << "YES\n";
            else
                cout << "NO\n";
            q--;
        }
    }
};
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    Solution S[n];
    for (int i = 0; i < n; ++i)
    {
        S[i].input();
        S[i].solve();
    }
    // Solution S;
    // S.input();
    // S.solve();
    return 0;
}