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

int p;
string s;
public:
// void ans(string s)
// {
//     for(int i=0;i<s.size();++i)
//     {
//         if(s[i]==0)
//         {
//             s.erase(s.begin()+i);
//             i--;
//         }
//         else
//         break;
//     }
//     cout<<s<<endl;
// }
    void input()
    {
        cin>>p;
        cin>>s;
    }
    void solve()
    {
        string a;
        int x=0;
        for(int i=0;i<p;++i)
        {
            int z=s[i]-'0';
            if(z%2!=0)
            {
                x++;
                a.push_back(s[i]);
            }
            if(x>=2)
            break;
        }
        if(a.size()<=1)
        cout<<-1<<endl;
        else
        cout<<a<<endl;
        // while(s.size()>0)
        // {
        //     if(s[s.size()-1]=='0')
        //     s.pop_back();
        //     else 
        //     break;
        // }
        // int n=s.size();
        // if(n<=1)
        // {
        //     cout << -1 << endl;
        //     return;
        // }
        // int sum=0;
        // for(int i=0;i<n;++i)
        // {
        //     int x=s[i]-'0';
        //     sum+=x;
        // }        
        // if(s[n-1]%2!=0)
        // {
        //     if(sum%2==0)
        //     cout<<s<<endl;
        //     else
        //     {
        //         for(int i=0;i<n;++i)
        //         {
        //             if(s[i]%2!=0)
        //             {
        //                 s.erase(s.begin()+i);
        //                 break;
        //             }
        //         }
        //         cout<<s<<endl;
        //     }
        // }
        // else
        // {
        //     while(s.size()>0)
        //     {
        //         if(s[s.size()-1]%2==0)
        //         s.pop_back();
        //         else
        //         break;
        //     }
        //     if(sum%2==0)
        //     cout<<s<<endl;
        //     else
        //     {
        //     for (int i = 0; i < s.size(); ++i)
        //     {
        //         if (s[i] % 2 != 0)
        //         {
        //                 s.erase(s.begin() + i);
        //                 break;
        //         }
        //     }
        //     cout << s << endl;
        //     }

        // }
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