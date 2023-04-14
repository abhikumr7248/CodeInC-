#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin>>n;
        int x;
        x=n%5;
        int y;
        y=n/5;
        int z;
        z=y*4;
        cout<<z+x<<endl;
        
    }
    return 0;
}
