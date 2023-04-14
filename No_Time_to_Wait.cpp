#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,x;
    cin>>n>>h>>x;
    int a[n];
    for(int i=0;i<n;++i)
    cin>>a[i];
    int y;
    y=h-x;
    int c=0;
    for (int i = 0; i < n; ++i)
    {
        if(y<=a[i])
        c++;
    }
    if(c!=0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}