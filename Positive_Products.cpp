#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int l=0;l<t;++l)
    {
        int n,ne=0,pe=0;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;++i)
        cin>>a[i];
        for(int k=1;k<=n;++k)
        {
            if(a[k]<0)
            ne++;
            else if(a[k]>0)
            pe++;
        }
        if((pe==0 && ne==2) ||(ne==0 && pe==2))
        cout<<"1"<<endl;
        else if((pe==0 && ne==3) ||(ne==0 && pe==3))
        cout<<"3"<<endl;
        else if(pe==0 && ne>3)
        {
            if(ne%2==0)
            {
                int x=((ne*((ne/2)-1)) + (ne/2));
                cout<<x<<endl;
            }
            else if(ne%2==1)
            {
                int y = (ne * ((ne / 2) - 1));
                cout<<y<<endl;
            }
        }
        else if(ne==0 && ne>3)
        {
            if (pe % 2 == 0)
            {
                int x = ((pe * ((pe / 2) - 1)) + (pe / 2));
                cout << x << endl;
            }
            else if (pe % 2 == 1)
            {
                int y = (pe * ((pe / 2) - 1));
                cout << y << endl;
            }
        }
        else if(ne-pe==0)
        {
            cout<<ne<<endl;
        }
        else if(ne-pe==1 || pe-ne==1)
        {
            if(ne>pe)
            cout<<ne<<endl;
            else if(pe>ne)
            cout<<pe<<endl;
        }
        else if(ne-pe>1 || pe-ne>1)
        {
            if(pe%2==0 && ne%2==0)
            {
                int x = ((ne * ((ne / 2) - 1)) + (ne / 2));
                int y = ((pe * ((pe / 2) - 1)) + (pe / 2));
                cout<<x+y<<endl;
            }
            else if (pe % 2 == 1 && ne % 2 == 1)
            {
                int y = (ne * ((ne / 2) - 1));
                int x = (pe * ((pe / 2) - 1));
                cout << x + y << endl;
            }
            else if (pe % 2 == 0 && ne % 2 == 1)
            {
                int x = ((pe * ((pe / 2) - 1)) + (pe / 2));
                int y = (ne * ((ne / 2) - 1));
                cout<<x+y<<endl;
            }
            else if (pe % 2 == 1 && ne % 2 == 0)
            {
                int y = (pe * ((pe / 2) - 1));
                int x = ((ne * ((ne / 2) - 1)) + (ne / 2));
                cout<<x+y<<endl;
            }
        }
    }

    return 0;
}