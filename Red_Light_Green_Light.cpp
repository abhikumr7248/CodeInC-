#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int n,k,c=0;
        cin>>n>>k;
        int x[n];
        for(int j=0;j<n;++j)
        {
            cin >> x[j];
            if (x[j] > k)
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
