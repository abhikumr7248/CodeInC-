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

/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int cnt, x = 0;
    string s;
    cin >> s;
    cnt = s.size() / 2;
    if (s.size() % 2)
    {
        for (int i = 1; i < s.size(); i++)
            if (s[i] == '1')
            {
                cout << cnt + 1 << endl;
                return 0;
            }
    }

    cout << cnt << endl;
   
    return 0;
}