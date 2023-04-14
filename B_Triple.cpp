#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int p=0;p<a;++p)
    {
        int n;
        cin>>n;
        vector<int> ar(n);
        for(auto &i: ar)
        cin>>i;
        map<int,int,greater<int>> mp;
        for(auto &x: ar)
        mp[x]++;
        int f=0;
        for(auto &it: mp)
        {
            if(it.second>=3)
            {
                cout<<it.first<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
        cout<<-1<<endl;
    }
}