#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int a[11];
        int c1 = 0;
        int c2 = 0;
        for(int k=1;k<=10;++k)
        {
            cin>>a[k];
        }
        for(int j=1;j<=10;++j)
        {
            if(j%2==1)
            {
                if(a[j]==1)
                c1++;
            }
            else if(j%2==0)
            {
                if(a[j]==1)
                c2++;
            }
        }
        if(c1>c2)
        cout<<"1"<<endl;
        else if(c2>c1)
        cout<<"2"<<endl;
        else if(c1==c2)
        cout<<"0"<<endl;
    }
    return 0;
}