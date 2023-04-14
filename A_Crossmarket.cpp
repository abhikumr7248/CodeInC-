#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;++i)
    {
        int m,n;
        cin>>m>>n;
        int x = min(m, n);
        if(m==1 && n==1)
        cout<<0<<endl;
        else
        cout<< m + n + x - 2 << endl;
    }
}