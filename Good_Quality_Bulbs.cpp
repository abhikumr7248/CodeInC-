#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        int sum=0;
        for(int j=0;j<n-1;++j)
        {
            cin >> a[j];
            sum=sum+a[j];
        }
        int y=sum/n;
        if(y>=x)
        cout<<"0"<<endl;
        else
        {
            int b=(x*n)-sum;
            cout<<b<<endl;
        }
    }
    return 0;
}