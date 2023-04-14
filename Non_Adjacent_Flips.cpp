#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int m=0;m<t;++m)
    {
        int n;
        int c1=0,c0=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;++i)
        {
            if(s[i]=='1')
            {
                c1++;
            }
            else if(s[i]=='0')
            {
                c0++;
            }
        }
        int x=0,y=0,z=0,w=0,v=0;
        if(c1==0)
        x++;
        else if(c0==0)
        y++;
        else 
        {
            for (int j = 0; j < n; ++j)
            {
                if (c1 <= c0)
                {
                    if ((s[j] == '1' && s[j + 1] == '0') || (s[j] == '0' && s[j + 1] == '1'))
                        z++;
                    else if (s[j]=='1' && s[j+1]=='1')
                    w++;
                }
                else if(c1>c0)
                v++;
            }
        }
        if(x!=0)
        cout<<0<<endl;
        else if(y!=0 || v!=0)
        cout<<c1-1<<endl;
        else if(z!=0)
        cout<<1<<endl;
        else if(w!=0)
        cout<<2<<endl;
    }
    return 0;
}