#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int a,b,x;
        cin>>a>>b>>x;
        int y;
        y=(b-a)/x;
        cout<<y<<endl;
    }
    return 0;
}