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
//1
void sw(int& aa, int& bb)
{
    aa^= bb^= aa^=bb;
}
//2
void ul(char& aa)
{
    aa=aa^32;
}
//3
bool eq(int aa, int bb)
{
    if(!(aa^bb))
    return true;
    else
    return false;
}
//4
int max3(int aa,int bb,int cc)
{
    int maxi=aa;
    (maxi<bb) && (maxi=bb);
    (maxi<cc) && (maxi=cc);
    return maxi;
}
//5
int min3(int aa, int bb, int cc)
{
    int mini = aa;
    (mini > bb) && (mini = bb);
    (mini > cc) && (mini = cc);
    return mini;
}
//6
int isPowerOf2(int aa)
{
    return (aa && !(aa & (aa-1)));
}
public:
    void input()
    {
    }
    void solve()
    {
    ll n, m, temp, i, check;
    cin >> n >> m;
    ll min1 = 10e5, min2 = 10e5, max1 = -10e5, max2 = -10e5;
    ll arr[m * n], ans;

    if (m * n == 1)
    {
    cin >> temp;
    cout << 0 <<endl;
    return ;
    }
    else if (m * n == 2)
    {
    cin >> min1;
    cin >> max1;
    if (max1 < min1)
    {
        temp = min1;
        min1 = max1;
        max1 = temp;
    }
    cout << max1 - min1 << endl;
    return;
    }

    for (i = 0; i < m * n; i++)
    cin >> arr[i];

    for (i = 0; i < m * n; i++)
    if (arr[i] > max1)
        max1 = arr[i];

    check = 0;
    for (i = 0; i < m * n; i++)
    {
    if (arr[i] == max1)
    {
        if (check == 0)
        {
            check = 1;
            continue;
        }
    }
    if (arr[i] > max2)
        max2 = arr[i];
    }

    for (i = 0; i < m * n; i++)
    if (arr[i] < min1)
        min1 = arr[i];

    check = 0;
    for (i = 0; i < m * n; i++)
    {
    if (arr[i] == min1)
    {
        if (check == 0)
        {
            check = 1;
            continue;
        }
    }
    if (arr[i] < min2)
        min2 = arr[i];
    }
    ans = max(max1 * (m * n - 1) - (min(m, n) - 1) * (min2) - ((max(m, n) - 1) * min(m, n)) * (min1), -1 * (min1 * (m * n - 1) - (min(m, n) - 1) * (max2) - ((max(m, n) - 1) * min(m, n)) * (max1)));
    cout << ans << endl;
    }
};
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    Solution S[n];
    for (int i = 0; i < n; ++i)
    {
        S[i].input();
        S[i].solve();
    }
    // Solution S;
    // S.input();
    // S.solve();
    return 0;
}