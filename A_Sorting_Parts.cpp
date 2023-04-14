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
        vector<int> v1;
        for(int j=0;j<n;++j)
        {
            cin >> arr[j];
            v1.push_back(arr[j]);
        }
        vector<int> v2;
        v2=v1;
        sort(v2.begin(),v2.end());

        if(v2==v1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}