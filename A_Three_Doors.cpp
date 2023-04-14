#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int x,a,b,c;
        cin>>x>>a>>b>>c;
        string s="";
        if(x==3)
        {
            if(c==0)
            s="NO";
            else
            {
                if(c==2)
                {
                    if(b==1)
                    s="YES";
                    else
                    s="NO";
                }
                else{
                    if(a==2)
                    s="YES";
                    else
                    s="NO";
                }

            }
        }
        if(x==2)
        {
            if (b == 0)
                s = "NO";
            else
            {
                if (b == 3)
                {
                    if (c == 1)
                        s = "YES";
                    else
                        s = "NO";
                }
                else
                {
                    if (a == 3)
                        s = "YES";
                    else
                        s = "NO";
                }
            }
        }
        if(x==1)
        {
            if (a == 0)
                s = "NO";
            else
            {
                if (a == 2)
                {
                    if (b == 3)
                        s = "YES";
                    else
                        s = "NO";
                }
                else
                {
                    if (c == 2)
                        s = "YES";
                    else
                        s = "NO";
                }
            }
        }
        if(x==0)
        {
            s="YES";
        }
        cout<<s<<endl;
    }
}