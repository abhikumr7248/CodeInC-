#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int x,y,a,b,k;
        cin>>x>>y>>a>>b>>k;
        int m,n;
        m=x+(a*k);
        n=y+(b*k);
        if(m>n)
            cout << "DIESEL" << endl;
        else if(m<n)
            cout << "PETROL" << endl;
        else
        cout<<"SAME PRICE"<<endl;
    }
    return 0;
}