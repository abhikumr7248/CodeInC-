#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,m,d;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        x=0;
        m=0;
        d=0;
        cin>>x>>m>>d;
        int a=0;
        int b=0;
        a=x*m;
        b=x+d;
        if(a<=b)
        cout<<a<<endl;
        else
        cout<<b<<endl;
    }
    return 0;
}