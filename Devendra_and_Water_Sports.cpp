#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,z,y,a,b,c;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>z>>y>>a>>b>>c;
        int x;
        x=y+a+b+c;
        if(x<=z)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}