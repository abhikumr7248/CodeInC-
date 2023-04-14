#include<bits/stdc++.h>
using namespace std;
void calc(int x,int y,int z)
{
    int a=0;
    a=y*z;
    if(a<x)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main()
{
    int t,m,n,k;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        m=0;
        n=0;
        k=0;
        cin>>m>>n>>k;
        calc(m,n,k);
    }
    return 0;
}