#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>k;
        int ci=0;
        int co=0;
        for(int j=1;j<=k;++j)
        {
            if(j%2!=0)
            ci=ci+3;
            else if(j%2==0)
            co=co+1;
        }
        int x;
        x=ci-co;
        cout<<x<<endl;
    }
    return 0;
}