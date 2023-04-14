#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;++i)
    {
        long long n;
        cin>>n;
        string x;
        x=to_string(n);
        int k=x.length()-1;
        long long p=pow(10,k);
        long long ans;
        ans=n-p;
        cout<<ans<<endl;
    }
}