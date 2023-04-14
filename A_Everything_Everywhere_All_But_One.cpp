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
        vector<int> a(n);
        for (auto &i : a)
            cin >> i;
        int f=0;;
        int sum = accumulate(a.begin(), a.end(), 0);
        for (int i = 0; i < n; i++)
        {
            if (sum - a[i] == a[i] * (n - 1))
            {
                f++;
            }
        }
        if(f>0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
} 