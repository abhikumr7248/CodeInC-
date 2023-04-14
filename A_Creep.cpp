#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;++i)
    {
        int A,B;
        cin >> A >> B;
        for (int i = 0; i < min(A, B); ++i)
            cout << "01";
        for (int i = 0; i < abs(A - B); ++i)
            cout << (A < B ? 1 : 0);
        cout << '\n';
    }
}