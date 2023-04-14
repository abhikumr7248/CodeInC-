#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin>>w;
    for(int r=0;r<w;++r)
    {
        int n,m,x,y,d;
        cin>>n>>m>>x>>y>>d;
        int count = 0;
        if ((x - d <= 1 && x + d >= n))
            count++;
        if (y - d <= 1 && y + d >= m)
            count++;
        if ((x + d >= n && y + d >= m))
            count++;
        if (x - d <= 1 && y - d <= 1)
            count++;
        if(count!=0)
        cout<<-1<<endl;
        else
        {
            int ans;
            ans=n+m-2;
            cout<<ans<<endl;
        }
    }
}