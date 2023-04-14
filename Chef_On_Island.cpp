#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,xr,yr,d;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>x>>y>>xr>>yr>>d;
        int m,n;
        m=x/xr;
        n=y/yr;
        if(m<d || n<d)
        cout<<"NO"<<endl;
        else if(m>=d && n>=d)
        cout<<"YES"<<endl;
    }
    return 0;
}
