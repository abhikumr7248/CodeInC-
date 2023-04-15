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
vector<int> a;
public:
    void input()
    {
        cin>>n;
        a.resize(n);
        for(auto &i: a)
        cin>>i;
    }
    int get_mex(vector<int>& v,int d)
    {
        vector<int> b(d);
        for (auto &i : v)
        {
        if (i < d)
            b[i]++;
        }
        int mex = 0;
        while (mex < d && b[mex])
        mex++;
        return mex;
    }
    void solve()
    {
        int mex = get_mex(a,a.size());
        if (mex == n)
        {
        cout << "No" << endl;
        }
        else
        {
        vector<int> to;
        if (find(a.begin(), a.end(), mex + 1) != a.end())
        {
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == mex + 1)
                to.push_back(i);
        }
        for (ll i = to[0]; i <= to[to.size()-1]; i++)
            a[i] = mex;
        if (get_mex(a,a.size()) != mex + 1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
        }
        else
        cout << "Yes" << endl;
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
        S[i].solve();
    }
    // Solution S;
    // S.input();
    // S.solve();
    return 0;
}