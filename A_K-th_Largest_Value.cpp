#include<bits/stdc++.h>
using namespace std;
int main()
{

int x=0;
int y=0;
int n;
int q;
    cin >> n >> q;
int a[n];
    for(int i=0;i<n;++i)
    {
        cin >> a[i];
        if (a[i])
            y++;
        else
            x++;
    }

    while (q--)
    {
        int t, k;
        cin >> t >> k;
        if (t == 1)
        {
            k--;
            if (a[k])
                x++, y--;
            else
                x--, y++;
            a[k] = 1 - a[k];
        }
        else
        {
            if (k <= y)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
    }
}