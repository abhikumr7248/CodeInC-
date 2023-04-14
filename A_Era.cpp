#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin>>w;
    for(int r=0;r<w;++r)
    {
        int n;
        cin >> n;
        int a= 0;
        int k;
        for (int i = 1; i <= n; i++)
        {
            cin >> k;
            a = max(a, k - i);
        }
        cout <<a<< '\n';
    }
    return 0;
}