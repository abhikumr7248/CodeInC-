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
int n;
vector<int> a, b;

public:
    void input()
    {
    cin >> n;
    a.resize(n);
    b.resize(n);
    for (auto &i : a)
    cin >> i;
    for (auto &i : b)
    cin >> i;
    }
    void solve()
    {
    int fst = -1, last = -1, mn = INT_MAX, mx = -1;
    for (int i= 0; i < n; i++)
    cin >> a[i];
    
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++)
    {
    if (a[i] = b[i])
    {
        fst = i;
        break;
    }
    }
    for (int i = n - 1; i >= 0; i--)
    {
    if (a[i] != b[i])
    {
        last= i;
        
            break;
    }
    }
    for (int i = fst; i <= last; i++)
    {
    mn = min(mn, a[i]);
    mx = max(mx, a[i]);
    }
    if (fst > 0)
    {
    for (int i = fst - 1; i >= 0; i--)
    {
        if (a[i] <= mn)
        {
            fst--;
            mn = a[i];
        }
        else
            break;
    }
    }
    if (last < n - 1)
    {
    for (int i = last + 1; i < n; i++)
    {
        if (a[i] >= mx)
        {
            mx = a[i];
            last++;
        }
        else
            break;
    }
    }
    cout << fst + 1<<" "<<last+1<<endl;
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