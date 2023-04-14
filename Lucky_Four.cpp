#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    cin>>a[i];
    for(int i=0;i<n;++i)
    {
        int c=0;
        for(int j=0;a[i]!=0;j++)
        {
            int x;
            x=a[i]%10;
            if(x==4)
            c++;
            a[i]=a[i]/10;
        }
        cout<<c<<endl;
    }
    return 0;
}
