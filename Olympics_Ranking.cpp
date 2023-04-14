#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,g1,s1,b1,g2,s2,b2;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        if(g1+s1+b1>g2+s2+b2)
        cout<<"1"<<endl;
        else
        cout<<"2"<<endl;
    }
    return 0;
}