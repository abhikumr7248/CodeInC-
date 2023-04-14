#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    float h, x, y, c;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> h >> x >> y >> c;
        int d;
        d = h * (x + floor(y/2.0));
        if (d <= c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}