#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int w=0;w<t;++w)
    {
        string s;
        cin >> s;
        int f=0;
        if (s.back() != 'B')
        {
            f++;
        }
        int n= 0;
        for (auto c : s)
        {
            if (c == 'A')
                ++n;
            else
                --n;
            if (n < 0)
            {
            f++;
            }
        }
        if(f==0)
        cout << "YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}