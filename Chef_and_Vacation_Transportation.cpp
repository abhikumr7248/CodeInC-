#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,z;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>x>>y>>z;
        int c;
        c=x+y;
        if(c<z)
        cout<<"PLANEBUS"<<endl;
        else if(c>z)
        cout<<"TRAIN"<<endl;
        else if(c==z)
        cout<<"EQUAL"<<endl;
    }
    return 0;
}