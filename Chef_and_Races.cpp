#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int x,y,a,b;
        int count=2;
        cin>>x>>y>>a>>b;
        if(x==a)
        count--;
        if (x == b)
            count--;
        if (y == a)
            count--;
        if (y == b)
            count--;
        cout<<count<<endl;
    }
    return 0;
}