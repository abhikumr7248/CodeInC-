#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x1,x2,y1,y2,z1,z2;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        x1=0;
        x2=0;
        y1=0;
        y2=0;
        z1=0;
        z2=0;
        cin>>x1>>x2>>y1>>y2>>z1>>z2;
        if((x2>=x1) && (y2>=y1) && (z2<=z1))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
