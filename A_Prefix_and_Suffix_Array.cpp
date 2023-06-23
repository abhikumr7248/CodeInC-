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
vector<string> s;
public:
    void input()
    {
        cin>>n;
        s.resize(((2*n)-2));
        for(auto &it: s)
        cin>>it;

    }
    void solve()
    {
        // unordered_map<char,int> mp;
        // for(auto &it: s)
        // {
        //     for(auto &i: it)
        //     mp[i]++;
        // }
        // string ans;
        // while(n>0)
        // {
        //     for(auto &i: mp)
        //     {
        //         if(i.second>0)
        //         {
        //             ans.push_back(i.first);
        //             i.second--;
        //             n--;
        //         }
        //         if(n<=0)
        //         break;
                
        //     }
        // }
        // mp.clear();
        // for(auto &i: ans)
        // {
        //     mp[i]++;
        // }
        // int c=0;
        // for(auto &it: mp)
        // {
        //     if(it.second%2!=0 && c>1)
        //     {
        //         cout<<"NO"<<endl;
        //         return;
        //     }
        //     else if(it.second%2!=0)
        //     c++;
        // }
        // cout<<"YES"<<endl;
        string a = "", b = "";
        for (auto &s : s)
        {
        if (s.size() == n - 1)
        {
            if (a.size())
                b = s;
            else
                a = s;
        }
        }
        if (a.substr(1, n - 2) == b.substr(0, n - 2))
        {
        }
        else
        {
        swap(a, b);
        }
        string str = a + b.back();
        // cout << str << endl;
        for (int i = 0; i < n / 2; i++)
        {
        if (str[i] != str[n - i - 1])
        {
            cout << "NO"<<endl;
            return;
        }
        }
        cout << "YES"<<endl;
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