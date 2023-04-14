#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout<<"hello";
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int n;
        cin>>n;
        if(n%4 ==0)
        {
            int x;
            x=n/4;
            cout<<x<<endl;
        }
        else
        {
            int y;
            y=n/4;
            cout<<y+1<<endl;
        }
    }
    return 0;
}