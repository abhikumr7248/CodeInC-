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
int cnt[2][2];
public:
    void input()
    {
    }
    void solve()
    {
    int n;
    cin >> n;
    --n;
    cnt[0][0] = cnt[0][1] = cnt[1][0] = cnt[1][1] = 0;
    cnt[0][0]++;
    int tmp = 2, timer = 0, sum = 1;
    bool b = 1;
    while (n >= tmp)
    {
    ++timer;
    n -= tmp;
    cnt[b][(sum & 1)] += (tmp / 2) + (tmp % 2 == 1);
    cnt[b][1 - (sum & 1)] += (tmp / 2);

    sum += tmp;
    tmp++;
    if (timer % 2 == 0)
        b = 1 - b;
    }
    cnt[b][(sum & 1)] += (n / 2) + (n % 2 == 1);
    cnt[b][1 - (sum & 1)] += (n / 2);

    cout << cnt[0][0] << ' ' << cnt[0][1] << ' ' << cnt[1][0] << ' ' << cnt[1][1] << endl;
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