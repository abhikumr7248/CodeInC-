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
    /*ull n;
    cin>>n;
    ull ai,an;
    ai=n;
    an=n*n;
    ull sum;
    sum=ai+an;
    sum=sum*n;
    sum=sum/2;
    ull ans=sum;
    for(int i=1;i<=n;++i)
    {
        ans=ans+(n*i);
    }
    cout<<ans<<endl;
    for(int i=2;i<n;++i)
    {
        ans=ans+i;
    }
    ans=ans*2022;
    ans=ans%(10^9+7);
    cout<<ans<<endl;*/
    /*ll n;
    cin >> n;
    ll ans = 1;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans = ans * arr[i];
    }
    ans = n + ans - 1;
    cout << 2022 * ans << endl;*/
    /*ull n;
    cin>>n;
    ull sum=0;
    for(int i=1;i<n;++i)
    {
        sum += i * (2 * i + 1);
    }
    cout<<sum<<endl;*/
    ll mod = 1000000000 + 7;
    ull n;
    cin>>n;
    ull s = (((((2022*n)%mod) * ((n + 1)%mod))%mod) * ((4 * (n - 1))%mod)%mod / 6)%mod;
    
     cout<<s<<endl;
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