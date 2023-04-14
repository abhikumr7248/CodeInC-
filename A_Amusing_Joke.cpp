#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t, u, ans;
    cin >> s >> t >> u;
    ans = s + t;
    sort(ans.begin(), ans.end());
    sort(u.begin(), u.end());
    if (ans == u)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}