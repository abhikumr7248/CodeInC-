#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n,a,b;
        cin>>n>>a>>b;
        int p,q;
        p=(n+1)/2;
        q=n/2;
        int e,f;
        e=p*2;
        f=q*2;
        int x,y;
        x=e-a;
        y=f-b;
        cout<<(360+x+y)<<endl;
    }
    return 0;
}