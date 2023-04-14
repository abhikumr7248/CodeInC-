#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a[10];
    cin>>t;
    for(int i=0;i<t;++i)
    {
        for(int j=0;j<7;++j)
        {
            cin>>a[j];
        }
        int co = 0;
        int ci = 0;
        for(int k=0;k<7;++k)
        {
            if(a[k]==0)
            co++;
            else if(a[k]==1)
            ci++;
        }
        if(ci>co)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}