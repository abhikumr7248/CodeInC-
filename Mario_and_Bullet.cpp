#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int a;
        a=y/x;
        if(z<=a)
        cout<<0<<endl;
        else
        cout<<z-a<<endl;
    }
    return 0;
}