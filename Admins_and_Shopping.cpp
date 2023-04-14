#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        int p=0;
        for(int j=0;j<n;++j)
        {
            cin>>a[j];
            p=max(p,a[j]);
        }
        int sum=0;
        if(p<=x)
        {
            for (int j = 0; j < n; ++j)
            {
                if(x%a[j]==0)
                {
                    sum=sum+(x/a[j]);
                }
                else if(x%a[j]!=0)
                {
                    sum = sum + (x / a[j]) +1;
                }
            }
            cout<<sum<<endl;
        }
        else if(p>x)
        {
            cout<<p<<endl;
        }
    }
        
    return 0;
}
