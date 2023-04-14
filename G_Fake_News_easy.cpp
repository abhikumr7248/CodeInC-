#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
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
class Solution
{
private:
string s;
public:
void input()
{
cin>>s;
}
void solve()
{
string t = "heidi";
int k = 0;
for (int i = 0; i < s.size(); ++i)
{
    if (s[i] == t[k])
        k++;
}
if (k >= 5)
    cout << "YES" << endl;
else
    cout << "NO" << endl;
}
};
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int n;
    // cin >> n;
    // Solution S[n];
    // for (int i = 0; i < n; ++i)
    // {
    //     S[i].input();
    //     S[i].solve();
    // }
    // return 0;
    Solution S;
    S.input();
    S.solve();
}