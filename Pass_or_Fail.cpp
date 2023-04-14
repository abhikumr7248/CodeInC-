#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    int n, x, p;
    cin>>q;
    for(int i=0;i<q;++i)
    {
        n=0;
        x=0;
        p=0;
        cin >> n >> x >> p;
        int a = 0;
        a = (x * 3) - ((n - x) * (1));
        if (a >= p)
            cout << "PASS"<<endl;
        else
            cout << "FAIL"<<endl;
    }
    return 0;
}