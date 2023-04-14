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
        string x;
        string y;
        cin>>x;
        cin>>y;
        int count=0;
        for(int i=0;i<n;++i)
        {
            if ((x[i] == 'R' && y[i] == 'R') || (x[i] == 'G' && y[i] == 'B') || (x[i] == 'B' && y[i] == 'G') || (x[i] == 'G' && y[i] == 'G') || (x[i] == 'B' && y[i] == 'B'))
                count++;
        }
        if(count==n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}