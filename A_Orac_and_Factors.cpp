#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;++i)
    {
        int n,k;
        cin>>n>>k;
        for(unsigned long long j=0;j<k;++j)
        {
            if(n%2==0)
            {
                n=n+2;
            }
            else if(n%3==0)
            {
                n=n+3;
            }
            else
            {
                n=n+n;
            }
        }
        cout<<n<<endl;
    }
    
}