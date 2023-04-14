#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin>>w;
    for(int r=0;r<w;++r)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        for(int i=n-1;i>=0;--i)
        {
            if(s[i]==')')
            c++;
            else
            break;
        }
        if(n-c<c)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
}
