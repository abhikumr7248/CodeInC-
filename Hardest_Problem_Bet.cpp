#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sa,sb,sc;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        sa=0;
        sb=0;
        sc=0;
        cin>>sa>>sb>>sc;
        if((sa<sb) && (sa<sc))
        cout<<"Draw"<<endl;
        else if((sb<sc) && (sb<sa))
        cout<<"Bob"<<endl;
        else
        cout<<"Alice"<<endl;
    }
    return 0;
}