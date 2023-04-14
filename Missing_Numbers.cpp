#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int a,b,c,d;
        int f=0;
        cin>>a>>b>>c>>d;
        if((a<0) || (b<0) || (c<0) || (d<0))
        f=f+1;
        if(f==0)
        cout<<-1<<" "<<-1<<endl;
        else
        {
            int m=std::min({a,b,c,d});
            int n=std::max({a,b,c,d});
            int x,y;
            x = ((-m) - sqrt((m * m) - (4 * (-1) * n))) / (2 * (-1));
            y = ((-m) + sqrt((m * m) - (4 * (-1) * n))) / (2 * (-1));
            int z=-y;
            cout<<x<<" "<<z<<endl;
        }
    }
    return 0;
}