#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;++i)
    {
        int x;
        cin>>x;
        int arr[x];
        unordered_map<int,int> me;
        unordered_map<int, int> mo;
        for(int i=0;i<x;++i)
        {
            cin>>arr[i];
            if(i%2==0)
            me.insert({arr[i],arr[i]%2});
            else if(i%2!=0)
            mo.insert({arr[i], arr[i] % 2});
        }
        int f=0;
        for(auto &it: me)
        {
            if(me[arr[0]]!=it.second)
            f++;
        }
        for (auto &ot : mo)
        {
            if (mo[arr[1]] != ot.second)
                f++;
        }
        if(f==0)
        cout<<"YES";
        else
        cout<<"NO";
        cout<<endl;
    }
}