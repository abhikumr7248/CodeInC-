#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    int count = 0;
    cin >> n >> m >> k;
    int t[1000][1000];
    int q[1000];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= k; ++j)
        {
            cin >> t[i][j];
        }
        cin >> q[i];
        int sum = 0;
        for (int a = 1; a <= k; ++a)
        {
            sum = sum + t[i][a];
        }
        if (sum >= m && q[i] <= 10)
            count++;
    }
    cout<<count<<endl;
    cout<<"hello";
    return 0;
}