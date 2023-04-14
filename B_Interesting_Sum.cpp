#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int n;
        cin>>n;
        int arr[n];
        vector<int> v;
        for(int j=0;j<n;++j)
        {
            cin>>arr[j];
        }
        for(int j=0;j<n;++j)
        v.push_back(arr[j]);
        sort(v.begin(),v.end());
        int s1=v[0]+v[1];
        int s2=v[v.size()-1]+v[v.size()-2];
        int s=s2-s1;
        cout<<s<<endl;
    }
}