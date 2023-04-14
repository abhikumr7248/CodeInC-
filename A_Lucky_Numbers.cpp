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
void solve()
{
    // int l,r;
    // cin>>l>>r;

    // if(r-l<10)
    // {
    //     int max=INT_MIN;
    //     int ans=0;
    //     for(int i=l;i<=r;++i)
    //     {
    //         vector<int> v1;
    //         int n=i,z=0;
    //         while(n>0)
    //         {
    //             v1.push_back(n%10);
    //             n=n/10;
    //         }
    //         sort(v1.begin(),v1.end());
    //         z=v1[v1.size()-1]-v1[0];
    //         if(z>max)
    //         {
    //             max=z;
    //         ans=i;
    //         }
    //     }
    //     cout<<ans<<endl;
    // }
    // else
    // {
    //     int p=l/10;
    //     int q=r/10;
    //     if(l%10!=0)
    //     p=p+1;
    //     if(r%10!=0)
    //     q=q-1;
    //     p=p*10;
    //     q=q*10;
    //     int max = INT_MIN;
    //     int ans = 0;
    //     int gg=0;
    //     for(int i=p;i<=q;i=i+10)
    //     {
    //         for(int j=9;j>=1;--j)
    //         {
    //         if(i%9==0)
    //         {
    //             cout<<i<<endl;
    //             gg=1;
    //             break;
    //         }
    //         }
    //         if(gg==1)
    //         break;
    //     }
    // }
    int l, r;
    cin >> l >> r;
    int mx = -1, num = -1;
    for (int i = l; i <= r; i++)
    {
        int a = INT_MAX, b = INT_MIN, x = i;
        while (x > 0)
        {
            int c = x % 10;
            a = min(a, c);
            b = max(b, c);
            x /= 10;
        } 
        if (b - a > mx)
        {
            mx = b - a;
            num = i;
            if (mx == 9)
                break;
        }
    }
    cout << num<<endl;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        solve();
    return 0;
}