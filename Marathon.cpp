#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int D,d,a,b,c;
        cin>>D>>d>>a>>b>>c;
        int x;
        x=D*d;
        if(x<10)
        cout<<"0"<<endl;
        else if(x>=10 && x<21)
        cout<<a<<endl;
        else if(x>=21 && x<42)
        cout<<b<<endl;
        else if(x>=42)
        cout<<c<<endl;
    }
    return 0;
}