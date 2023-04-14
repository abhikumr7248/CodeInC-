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
        int arr[n],frr[n];
        for(int j=0;j<n;++j)
        cin>>arr[j];
        for (int j = 0; j < n; ++j)
            cin >> frr[j];
        vector<int> v;
        v.push_back(frr[0]-arr[0]);
        for(int k=1;k<n;++k)
        {
            if(arr[k]>=frr[k-1])
            v.push_back(frr[k]-arr[k]);
            else if (arr[k] < frr[k - 1])
            v.push_back(frr[k]-frr[k-1]);
        }
        for(int j=0;j<v.size();++j)
        cout<<v[j]<<" ";
        cout << endl;
    }
    
}