#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int a,b,c,x,y,z;
        cin>>a>>b>>c;
        x=a+b;
        y=a+c;
        z=b+c;
        if(x>=y && x>=z)
        cout<<x<<endl;
        else if(y>=x && y>=z)
        cout<<y<<endl;
        else if(z>=x && z>=y)
        cout<<z<<endl;
    }
    return 0;
}