#include<bits/stdc++.h>
using namespace std;
int g(int x, int y)
{
    return x?g(y%x,x):y;
}
int main()
{
    int w;
    cin>>w;
    for(int r=0;r<w;++r)
    {
        int n;
        cin>>n;
        int arr[25],d=0;
        for(int i=0;i<n;++i)
        {
            cin >> arr[i];
            d = g(d, arr[i]);
        }
        
        if(d==1)
        cout<<0<<endl;
        else if(g(d,n)==1)
        cout<<1<<endl;
        else if(g(d,n-1)==1)
        cout<<2<<endl;
        else
        cout<<3<<endl;

    }
}