#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for(int w=0;w<r;++w)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i)
        cin>>arr[i];
        int i=0;
        while(i+1<n && arr[i+1]>=arr[i])
        i++;
        while (i + 1 < n && arr[i + 1] <=arr[i])
            i++;
        if(i+1==n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}