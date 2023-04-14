#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int q=0;q<a;++q)
    {
        int n;
        cin>>n;
        int arr[n],brr[n];
        for(int i=0;i<n;++i)
        cin>>arr[i];
        int k=0,m=0;
        for (int i = 0; i < n; ++i)
        {
            cin >> brr[i];
            if (arr[i] <brr[i])
                k = 1;
            if ((arr[i] - brr[i]) > m)
                m = arr[i] - brr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (((arr[i] - m) != brr[i]) && brr[i]!=0)
                k = 1;
        }
        if (k!=0)
            cout << "NO"<<endl;
        else
            cout << "YES"<<endl;
    
    }
}