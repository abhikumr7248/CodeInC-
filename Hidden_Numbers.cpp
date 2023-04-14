#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin>>n;
        if(n==2 || n==3 || n==1)
         cout << 1 << " " << n << endl;
        else if(n%2==0)
        cout<<2<<" "<<n/2<<endl;
        else if(n%3==0)
        cout << 3 << " " << n /3 << endl;
        else
            cout << 1 << " " << n << endl;
    }
    return 0;
}