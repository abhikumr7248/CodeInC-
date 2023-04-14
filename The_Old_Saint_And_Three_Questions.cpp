#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int a[10],b[10];
        int cao=0;
        int cbo=0;
        int cai=0;
        int cbi=0;
        for(int i=1;i<=3;++i)
        cin>>a[i];
        for(int j=1;j<=3;++j)
        {
            if(a[j]==0)
            cao++;
            else if(a[j]==1)
            cai++;
        }
        for(int k=1;k<=3;++k)
        cin>>b[k];
        for(int m=1;m<=3;++m)
        {
            if(b[m]==0)
            cbo++;
            else if(b[m]==1)
            cbi++;
        }
        if(cao==cbo && cai==cbi)
        cout<<"Pass"<<endl;
        else
        cout<<"Fail"<<endl;
    }
    return 0;
}