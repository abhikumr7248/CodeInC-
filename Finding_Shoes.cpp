#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int n,m;
        cin>>n>>m;
        if(n<=m)
        cout<<n<<endl;
        else
        {
            int x;
            x = n + (n - m);
            cout << x << endl;
        }
    }
    return 0;
}