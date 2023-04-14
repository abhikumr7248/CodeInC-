#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int p = 0; p < t; ++p)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;++i)
        cin>>a[i];

        int count1=0;
        int count2=0;

        for(int i=1;i<=n;++i)
        {
            if(a[i]==1)
            count1++;
            if(a[i]==2)
            count2++;
        }
        if(count2>=2)
        cout<<((count1*(n-1))+(count2-1))<<endl;
        else
        cout << (count1 * (n - 1)) << endl;
    }
    return 0;
}