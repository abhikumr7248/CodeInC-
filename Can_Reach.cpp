#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;++i)
    {
        int x,y,k;
        cin>>x>>y>>k;
        if((x%k==0) && (y%k==0))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}

