#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int b;
        cin>>b;
        if(b%2!=0)
        b=b-1;
        if(b%2==0)
        {
            int c;
            c=2*(b/2);
            int area=(b*b)/2;
            int d;
            d=area-c;
            cout<<d/4<<endl;
        }
    }
    return 0;
}