#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int p,c=0;
        cin>>p;
        for(int i=11;i>=0;--i)
        {
            int curr=pow(2,i);
            while(p>=curr)
            {
                p=p-curr;
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}