#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y;
    cin>>t;
    for (int i=0;i<t;++i)
    {
        cin>>n>>x>>y;
        int a;
        a=(n+1)*y;
        if(a>=x)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}