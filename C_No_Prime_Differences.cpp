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
int n,m;
public:
    void input()
    {
        cin>>n>>m;
    }
    void solve()
    {
        
    //    if(sieve[n])
    //    {
    //     for(int i=0;i<n;++i)
    //     {
    //         for(int j=0;j<m;++j)
    //         {
    //             cout<<(i+1)+j*n<<" ";
    //         }
    //         cout<<endl;
    //     }
    //    }
    //    else if(sieve[m])
    //    {
    //     int k=1;
    //     for(int i=0;i<n;++i)
    //     {
    //         for(int j=0;j<m;++j)
    //         {
    //             cout<<k++<<" ";
    //     }
    //     cout<<endl;

    //     }
    //    }
    //    else
    //    {
    //     for(int i=0;i<n;++i)
    //     {
    //         for(int j=0;j<m;++j)
    //         {
    //             if(i<=n/2)
    //             {
    //                 cout<<j+1+2*i*m<<" ";
    //             }
    //             else
    //             {
    //                 cout<<j+1+2*(i-n)*m+m<<" ";
    //             }
    //         }
    //         cout<<endl;
    //     }
    //    }
    //    cout<<endl;
    int gg=2*m;
        int x = (gg) + 1;
        while (x <= n * m)
        {
    for (int i = 0; i < m; i++)
        cout << x + i << " ";
    cout << endl;
    x += 2 * m;
        }

        for (int i = 1; i <= m; i++)
    cout << i << " ";
        cout << endl;
        int kk=3*m,tl=4*m;
        for (int i =kk + 1; i <= tl; i++)
    cout << i << " ";
        cout << endl;

        x = m + 1;
        while (x <= n * m)
        {
    if (x == kk + 1)
    {
        x += gg;
        continue;
    }
    for (int i = 0; i < m; i++)
        cout << x + i << " ";

    cout << endl;
    x += gg;
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
    // int till=1000000;
    // int sieve[till];
    // memset(sieve,0ll,sizeof(sieve));
    // for(int i=2;i<till;++i)
    // {
    //     if(!sieve[i])
    //     {
    //         for(int j=i*2;j<till;j+=i)
    //         sieve[j]=i;
    //     }
    // }
    for (int i = 0; i < n; ++i)
    {
        S[i].input();
        S[i].solve();
        cout << endl;
    }
    // Solution S;
    // S.input();
    // S.solve();
    return 0;
}