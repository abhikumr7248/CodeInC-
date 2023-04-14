#include <bits/stdc++.h>
using namespace std;
int n, m, a[100001];
long long A[100001], B[100001];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        A[i] = A[i - 1];
        B[i] = B[i - 1];
        if (i > 1)
            if (a[i - 1] > a[i])
                A[i] += a[i - 1] - a[i];
            else
                B[i] += a[i] - a[i - 1];
    }
    while (m--)
    {
        int s, t;
        cin >> s >> t;
        long long ans = s < t ? A[t] - A[s] : B[s] - B[t];
        cout << ans << endl;
    }
    return 0;
}