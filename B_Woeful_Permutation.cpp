#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin >> r;
    for (int w = 0; w < r; ++w)
    {
        int n;
        cin >> n;
        if(n%2!=0)
        {
            cout<<1<<" ";
            for(int i=2;i<=n;++i)
            {
                cout<<i+1<<" "<<i<<" ";
                i++;
            }
        }
        else if(n%2==0)
        {
            for(int i=1;i<=n;++i)
            {
                cout<<i+1<<" "<<i<<" ";
                i++;
            }
        }
        cout<<endl;
    }
}