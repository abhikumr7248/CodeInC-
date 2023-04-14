#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int xa,xb,ya,yb;
        cin>>xa>>xb>>ya>>yb;
        int a,b;
        a=ya/xa;
        b=yb/xb;
        cout<<a+b<<endl;
    }
    return 0;
}