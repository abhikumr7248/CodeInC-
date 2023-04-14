#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>a>>b;
        if(b==0 && a>0)
        cout<<"Solid"<<endl;
        else if(a==0 && b>0)
        cout<<"Liquid"<<endl;
        else if(a>0 && b>0)
        cout<<"Solution"<<endl;
    }
    return 0;
}