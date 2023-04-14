#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int x,a,b,y;
        cin>>x>>a>>b;
        y=a+((100-x)*b);
        cout<<y*10<<endl;
    }
    return 0;
}