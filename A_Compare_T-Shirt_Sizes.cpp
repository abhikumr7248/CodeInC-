#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin>>w;
    for(int r=0;r<w;++r)
    {
        string a, b;
        cin >> a >> b;
        int n = a.length(), m = b.length();
        if (a[n - 1] == b[m - 1])
        {
            if (n == m)
                cout << "=" << endl;
            else if (n > m)
            {
                if (a[n - 1] == 'L')
                {
                    cout << ">" << endl;
                }
                else
                {
                    cout << "<" << endl;
                }
            }
            else
            {
                if (a[n - 1] == 'L')
                {
                    cout << "<" << endl;
                }
                else
                {
                    cout << ">" << endl;
                }
            }
        }
        else
        {
            if (a[n - 1] == 'L')
            {
                cout << ">" << endl;
            }
            else if (b[m - 1] == 'L')
            {
                cout << "<" << endl;
            }
            else if (a[n - 1] == 'M')
            {
                cout << ">" << endl;
            }
            else if (b[m - 1] == 'M')
            {
                cout << "<" << endl;
            }
        }
    }
}