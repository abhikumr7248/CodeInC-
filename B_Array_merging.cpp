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
vector<int> array1,barray1;
public:
    void input()
    {
        cin>>n;
        array1.resize(n);
        barray1.resize(n);
        for(auto &i: array1)
        cin>>i;
        for (auto &i : barray1)
        cin >> i;
    }
    void solve()
    {
        // int m = 0;
        // map<int,int> m1,m2;
        // for(int i=1;i<n;++i)
        // {
        //     if(a[i]==a[i-1])
        //     m++;
        //     else
        //     {
        //          m1.insert({a[i-1],m});
        //          m=0;
        //     }
        // }
        // m=0;
        // for (int i = 1; i < n; ++i)
        // {
        //     if (b[i] == b[i - 1])
        //          m++;
        //     else
        //     {
        //          m2.insert({a[i - 1], m});
        //          m = 0;
        //     }
        // }
        // int maxi=0;
        // m=0;
        // for(int i=0;i<n;++i)
        // {
        //     m=m1[a[i]]+m2[b[i]];
        //     cout<<m1[a[i]]<<" "<<m2[b[i]]<<endl;
        //     maxi=max(maxi,m);
        // }
        // cout<<maxi<<endl;
        unordered_map<int,int> a,b;
        int count=1;
        for(int i=1;i<=n;++i)
        {
            if(i==n)
            {
                a[array1[i-1]]=max(count,a[array1[i-1]]);
                break;
            }
            if(array1[i]==array1[i-1])
            count++;
            else
            {
            a[array1[i - 1]] = max(count, a[array1[i - 1]]);
            count=1;
            }
        }
        count = 1;
        for (int i = 1; i <= n; ++i)
        {
            if (i == n)
            {
            b[barray1[i - 1]] = max(count,b[barray1[i - 1]]);
            break;
            }
            if (barray1[i] == barray1[i - 1])
            count++;
            else
            {
        b[barray1[i - 1]] = max(count,b[barray1[i - 1]]);
            count = 1;
            }
        }
        int ans=0;
        for(int e: array1)
        {
            ans=max(ans,a[e]+b[e]);
        }
        for (int e : barray1)
        {
            ans = max(ans, b[e] + a[e]);
        }
        cout<<ans<<endl;
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