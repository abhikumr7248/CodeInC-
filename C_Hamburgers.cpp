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
string s;
int inb, ins, inc, pb, ps, pc;
ll r;

bool test(ll n)
{
    ll nb = 0, ns = 0, nc = 0;
    for (unsigned i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'B')
            nb++;
        else if (s[i] == 'S')
            ns++;
        else
            nc++;
    }
    ll needb = 0, needs = 0, needc = 0;
    if (n * nb - inb >= 0)
        needb = n * nb - inb;
    if (n * ns - ins >= 0)
        needs = n * ns - ins;
    if (n * nc - inc >= 0)
        needc = n * nc - inc;

    ll cost = needb * pb + needs * ps + needc * pc;
    if (cost <= r)
        return true;
    return false;
}
void solve()
{
    cin >> s;
    cin >> inb >> ins >> inc >> pb >> ps >> pc >> r;
    ll ret = 0;
    ll b = 0, e = 10000000000000L, m;
    while (b <= e)
    {
        m = b + (e - b) / 2;
        if (test(m))
            ret = m, b = m + 1;
        else
            e = m - 1;
    }
    cout << ret;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
        solve();
    return 0;
}