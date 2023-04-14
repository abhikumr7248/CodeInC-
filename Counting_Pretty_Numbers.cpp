#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int l,r,c=0;
        cin>>l>>r;
        for(int j=l;j<=r;++j)
        {
            if(j%10==2 || j%10==3 || j%10==9)
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}