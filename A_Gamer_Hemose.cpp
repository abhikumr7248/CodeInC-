#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    int e;
    cin >> e;
    for (int f = 0; f < e; ++f)
    {
        ull n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(auto &i:v)
        cin>>i;
        int count=0;
        sort(v.begin(),v.end(),greater<int>());
        while(x>0)
        {
            x=x-v[0];
            if(x<=0)
            {
                count++;
                break;
            }
            count++;
            x=x-v[1];
            count++;
        }
        cout<<count<<endl;
    }
}