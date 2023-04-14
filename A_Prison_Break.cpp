#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    int w;
    cin >> w;
    for (int r = 0; r < w; ++r)
    {
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        int p,q;
        p=x-a;
        q=y-b;
        cout<<max(p,a-1)+max(q,b-1)<<endl;
    }
}
