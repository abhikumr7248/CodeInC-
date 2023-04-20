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
int l , r;
vector<int> a,b;
public:
    void input()
    {
        cin>>n;
        a.resize(n);
        b.resize(n);
        for(auto &i:a)
        cin>>i;
        for(auto &i:b)
        cin>>i;
    }
    void s()
    {
        l = 0;
        r = n - 1;
        while (l < n && a[l] == b[l])
        {
        l++;
        }
        while (r >= 0 && a[r] == b[r])
        {
        r--;
        }
    }
    void solve()
    {
        int le = l, ri = r;

        if (l >= r)
        {
        cout << 1 << " " << n <<endl;
        }
        else
        {
        for (int i = l; i > 0; i--)
        {
        if (b[i - 1] <= b[i])
            le--;
        else
            break;
        }
        for (int i = r; i < n - 1; i++)
        {
        if (b[i] <= b[i + 1])
            ri++;
        else
            break;
        }
        le+=1;
        ri+=1;
        cout << le<< " " << ri<<endl;
        }
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
        S[i].s();
        S[i].solve();
    }
    // Solution S;
    // S.input();
    // S.solve();
    return 0;
}