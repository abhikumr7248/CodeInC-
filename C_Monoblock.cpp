#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    vector<int> v1;
    for(int i=0;i<n;++i)
    {
        arr[i]++;
    }
    int a[m], b[m];
    int ar[n];
    unordered_map<int, int> mp;
    for(int i=0;i<m;++i)
    {
        int ans = 0;
        cin>>a[i]>>b[i]; 
        for(int j=0;j<n;++j)
        {
            if(j==a[i]-1)
            ar[j]=b[i];
            else
            ar[j]=arr[j];
        }
        for(int p=0;p<n;++p)
        {
            for(int q=p;q<n;++q)
            {
                for (int k = p; k <= q; k++)
                    mp[ar[k]]++;
                ans=ans+mp.size();
                mp.clear();
            }
        }
        cout << ans << endl;
    }
}