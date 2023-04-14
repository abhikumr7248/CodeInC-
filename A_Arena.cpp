#include<bits/stdc++.h>
using namespace std;
int main()
{
    int e;
    cin>>e;
    for(int f=0;f<e;++f)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(auto & i: a)
        cin>>i;
        map<int,int> mp;
        for(auto &x: a)
        mp[x]++;
        /*for(auto &it: mp)
        {
            cout << n -it.second<< endl;
            break;
        }*/
        cout<<n-begin(mp)->second<<endl;
        

    }
}