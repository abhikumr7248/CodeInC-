#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll signed long long
#define ld long double
#define to_low(s) transform(s.begin(), s.end(), s.begin(), ::tolower); // convert string to lowercase
#define to_up(s) transform(s.begin(), s.end(), s.begin(), ::toupper);  // convert string to uppercase
/*------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    string str;
    while (cin >> str)
    {
        int k = 0;
        string str1;
        for (int i = 0; i < str.size(); i++)
        {
            k = i;
            if (str[i] == '.')
                break;
            str1 += str[i];
        }
        if (str[k] != '.')
            cout << str << endl;
        else
        {
            if (str[k - 1] == '9')
                cout << "GOTO Vasilisa." << endl;
            else if (str[k + 1] >= '5')
            {
                str1[str1.size() - 1]++;
                cout << str1 << endl;
            }
            else
                cout << str1 << endl;
        }
    }
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
        solve();
    return 0;
}