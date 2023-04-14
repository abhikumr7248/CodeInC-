#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for(int w=0;w<r;++w)
    {
        int x,y;
        cin>>x>>y;
        float d;
        d=sqrt(pow(x,2)+pow(y,2));
        if(x==0 && y==0)
        cout<<0<<endl;
        else if(d==int(d))
        cout<<1<<endl;
        else
        cout<<2<<endl;
    }
}