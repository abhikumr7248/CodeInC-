#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for(int i=0;i<a;++i)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n > 2 || s == "00" || s == "11")
        {
            cout << "NO"<<endl;
        }
        else
        {
            cout << "YES"<<endl;
        }
    }
}