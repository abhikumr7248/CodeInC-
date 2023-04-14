#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for(int w=0;w<r;++w)
    {
        int n,m;
        cin>>n>>m;
        int a[n];
        int sum=0;
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum-m==0 || m>=sum)
        cout<<0<<endl;
        else
        cout<<sum-m<<endl;
    }
}