#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    int w;
    cin >> w;
    for (int r = 0; r < w; ++r)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(auto &i:a)
        cin>>i;
        int i, key, j,c=0;
        while (!is_sorted(a.begin(), a.end()))
        {
            for (int i = c % 2; i + 1 < n; i += 2)
            {
                if (a[i] > a[i + 1])
                {
                    swap(a[i], a[i + 1]);
                }
            }
            c += 1;
        }
        cout<<c<<endl;
    }
}