#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin >> w;
    for (int q = 0; q < w; ++q)
    {
        int n,x;
        cin>>n>>x;
        n=n-2;
        int count=1;
        while(n>0)
        {
            n=n-x;
            count++;
        }
        cout<<count<<endl;
    }
}