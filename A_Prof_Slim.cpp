#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int w = 0; w < t; ++w)
    {
        int n;
        cin>>n;
        int a[n];
        int count1=0,count2=0;
        int f=0;
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
            if(a[i]<0)
            count1++;
            else
            count2++;
        }
        int b[n];
        int c[n];
        for(int i=0;i<n;++i)
        {
            b[i]=abs(a[i]);
        }
        for (int i = 0; i < count1; ++i)
        {
            b[i] = -b[i];
        }
        for (int i = 0; i < n; ++i)
        {
            c[i] = b[i];
        }
        sort(c, c +n);
        for (int i = 0; i < n; ++i)
        {
            if(c[i]!=b[i])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}