#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    cin>>p;
    for(int i=0;i<p;++i)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if(a>=x && b>=y)
        cout<<"YES"<<endl;
        else if(a<x)
        {
            int p=x-a;
            c=c-p;
            if(c<0)
            cout<<"NO"<<endl;
            else
            {
                int k=y-b;
                c=c-k;
                if(c<0)
                cout<<"NO"<<endl;
                else
                cout<<"YES"<<endl;
            }
        }
        else if(a>=x && b<y)
        {
            int p = y - b;
            c = c - p;
            if (c < 0)
                cout << "NO" << endl;
            else
            cout<<"YES"<<endl;
        }
    }
}
