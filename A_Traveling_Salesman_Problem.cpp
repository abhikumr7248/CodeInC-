#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int l=0;l<a;++l)
    {
        int n;
        cin>>n;
        int x[n],y[n];
        int sum=0;
        int maxx=0,maxy=0,minx=0,miny=0;
        for(int i=0;i<n;++i)
        {
            cin>>x[i]>>y[i];
            maxx=fmax(maxx,x[i]);
            minx = fmin(minx, x[i]);
            maxy = fmax(maxy, y[i]);
            miny = fmin(miny, y[i]);
        }
        sum=2*(maxx+maxy-minx-miny);
        /*for(int i=0;i<n;++i)
        {
            for(int j=0;j<2;++j)
            cin>>arr[i][j];
        }
        int sum=0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < 2; ++j)
                
                {
                    sum=sum+(arr[i][j]*2);
                }
        }*/
        cout<<sum<<endl;
    }
}