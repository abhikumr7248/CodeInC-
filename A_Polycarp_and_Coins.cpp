#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    int w;
    cin>>w;
    for(int r=0;r<w;++r)
    {
        ull n;
        ull p;
        cin>>n;
        p=n/3;
        if((n-p)%2!=0)
        p++;
        
        ull q;
        q=(n-p)/2;
        cout<<p<<" "<<q<<endl;

    }
}