#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(c-a<0 || d-b<0)
            cout << "IMPOSSIBLE"<<endl;
        else
            cout<<"POSSIBLE"<<endl;
    }
    return 0;
}