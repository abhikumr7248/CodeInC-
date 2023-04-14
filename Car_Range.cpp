#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int p,m,v;
        cin>>p>>m>>v;
        cout<<((m-(p-1))*v)<<endl;
    }
    return 0;
}