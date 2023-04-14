#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for(int w=0;w<r;++w)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;++i)
        cin>>arr[i];
        int count=0;
        if(n==k)
        cout<<0<<endl;
        else
        {
            unordered_map<int,int> mp;
            for(int i=1;i<=k;++i)
            mp[i]++;
            for(int i=0;i<k;++i)
            {
                if(mp.find(arr[i])==mp.end())
                count++;
            }
            cout << count << endl;
        }
    }
}