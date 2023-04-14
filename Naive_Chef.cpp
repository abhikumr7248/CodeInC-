#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int n,a,b;
        int ca=0,cb=0;
        cin>>n>>a>>b;
        int p[1000];
        for(int j=0;j<n;++j)
        cin>>p[j];
        for(int j=0;j<n;++j)
        {
            if (a == p[j])
                ca++;
            if (b == p[j])
            cb++;
        }
        float s;
        s=(ca*cb*1.0)/(n*n*1.0);
         cout <<fixed<< setprecision(10) << s << endl;

    }
    return 0;
}