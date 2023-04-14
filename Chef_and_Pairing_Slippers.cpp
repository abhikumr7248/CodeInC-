#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n,l,x;
        cin>>n>>l>>x;
        int r;
        r=n-l;
        if(l<r)
        cout<<l*x<<endl;
        else
        cout<<r*x<<endl;
    }
    return 0;
}