#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;++i)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i)
        cin>>arr[i];

        unordered_map<int,int> mp;
        for(auto &x: arr)
        mp[x]++;

        if((n-mp.size())%2==0)
        cout<<mp.size()<<endl;
        else
        cout<<mp.size()-1<<endl;

    }
}