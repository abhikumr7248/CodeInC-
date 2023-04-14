#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,z;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        x=0;
        y=0;
        z=0;
        cin>>x>>y>>z;
        int a=0;
        a=x+(z*2);
        if(a>=y)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}