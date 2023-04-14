#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    ull n,k,mid;
    cin>>n>>k;
    cin >> n >> k;

    if (n % 2 == 0)
    {
        mid = n / 2;
    }
    else
    {
        mid = n / 2 + 1;
    }

    if (k <= mid)
    {
        cout << 2 * k - 1;
    }
    else
    {
        k = k - mid;
        cout << 2 * k;
    }
}