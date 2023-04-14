#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin >> r;
    for (int w = 0; w < r; ++w)
    {
        unsigned long long x, y;
        cin>>x>>y;
        cout<<int(y/(x*x))<<endl;
    }
}