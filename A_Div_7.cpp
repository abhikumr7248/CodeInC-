#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for(int p=0;p<r;++p)
    {
        int n;
        cin >> n;
        int a = n % 7;
        if (a <= n % 10)
            n -= a;
        else
            n += 7 - a;
        cout << n << "\n";
    }
}