#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rn;
    cin >> rn;
    for (int t9 = 0; t9 < rn; ++t9)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i)
        cin>>arr[i];
        int f=0;
        for(int i=1;i<n;++i)
        {
            if(arr[i]%arr[0]!=0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}