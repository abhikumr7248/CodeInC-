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
        cin>>n;
        for(int i=2;i<10e9;i++)
        {
            ull p=pow(2,i)-1;
            if(n%p==0)
            {
                cout<<n/p<<endl;
                break;
            }
        }
    }
}