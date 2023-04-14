#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin >> r;
    for (int w = 0; w < r; ++w)
    {
        int n;
        cin>>n;
        int a[n];
        int co=0;
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
            if(a[i]%2!=0)
            co++;
        }
        co=min(co,n-co);
        cout<<co<<endl;
    }
}