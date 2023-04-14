#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int r = 0; r < t; ++r)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int s = 0;
        for (int &x : a)
        {
            cin >> x;
            s += x;
        }
        if (s != 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}