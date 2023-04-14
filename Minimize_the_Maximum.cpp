/*#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
#define all(x) begin(x), end(x)
using namespace std;
#define ull unsigned long long
#define ll signed long long
#define ld long double
#define to_low(s) transform(s.begin(), s.end(), s.begin(), ::tolower); // convert string to lowercase
#define to_up(s) transform(s.begin(), s.end(), s.begin(), ::toupper);  // convert string to uppercase
template <typename T>                                                  // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return istream;
}
/*------------------------------------------------------------------------------------------------------------------------------
/*bool f(int n,vector<int> v,int mid)
{
    if(v[0]>mid)
    return false;
    for(int j=1;j<n;++j)
    {
        if(v[j-1]<mid)
        {
            v[j]=v[j]-(mid-v[j-1]);
            v[j-1]=mid;
        }
        if(v[j]>mid)
        return false;
    }
    vector<int> ds = v;
    sort(ds.begin(),ds.end());
    if(ds[ds.size()-1]>mid)
    return false;
    return true;
bool help(int n, vector<int> &ds, int mid)
{
    vector<int> vec = ds;
    if (vec[0] > mid)
        return false;
    // cout<<vec<<" ";
    // cout<<mid<<"\n";
    for (int i = 1; i < n; i++)
    {
        if (vec[i - 1] < mid)
            vec[i] = vec[i] - (mid - vec[i - 1]), vec[i - 1] = mid;
        if (vec[i] > mid)
            return false;
    }
    // cout<<vec<<" ";
    if (*max_element(all(vec)) > mid)
        return false;
    return true;
}

void solve()
{
    /*int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i: v)
    cin>>i;
    int i=0;
    vector<int> z;
    z=v;
    sort(z.begin(),z.end());
    int j=z[z.size()-1];
    int ans=INT_MAX;
    while(i<=j)
    {
        int mid=(i+j)/2;
        if(f(n,v,mid)==true)
        {
            ans=min(ans,mid);
            j=mid-1;
        }
        else
        i=mid+1;
    }
    cout<<ans<<endl;
    int n;
    cin >> n;
    vector<int>vec(n);
    cin >> vec;
    int i = 0;
    int j = *max_element(all(vec));
    int ans = 1e9;
    while (i <= j) {
        int mid = (i + j) / 2;
        if (help(n, vec, mid)) {
            ans = min(ans, mid);
            j = mid - 1;
        }
        else {
            i = mid + 1;
        }
    }
    cout << ans << "\n";
}
/*------------------------------------------------------------------------------------------------------------------------------
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
}*/

#include <bits/stdc++.h>
using namespace std;

// Aliases
using ll = long long;
using ld = long double;
using ull = unsigned long long;

// macros
#define nline "\n"
#define MOD 998244353
#define INF 1e18
#define int long long
#define all(x) begin(x), end(x)
#define Debug(x) cout << #x << " = " << x << "\n"
#define pb emplace_back

// operator overloading
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
    for (auto &it : v)
        cin >> it;
    return istream;
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}

// Mathematical Function
int GCD(int a, int b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll mod_add(int a, int b, int m = MOD)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}

ll mod_mul(int a, int b, int m = MOD)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}

ll mod_sub(int a, int b, int m = MOD)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}
// Calculating Power
ll modpow(int x, int n, int m = MOD)
{
    if (x == 0 && n == 0)
        return 0; // undefined case
    ll res = 1;
    while (n > 0)
    {
        if (n % 2)
            res = (res * x) % m;
        x = (x * x) % m;
        n /= 2;
    }
    return res;
}
// Modulo Inverse
int modinv(int x, int m = MOD)
{
    return modpow(x, m - 2, m);
}
int binpow(int a, int b)
{
    if (b == 0)
        return 1;
    int res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

bool help(int n, vector<int> &ds, int mid)
{
    vector<int> vec = ds;
    if (vec[0] > mid)
        return false;
    // cout<<vec<<" ";
    // cout<<mid<<"\n";
    for (int i = 1; i < n; i++)
    {
        if (vec[i - 1] < mid)
            vec[i] = vec[i] - (mid - vec[i - 1]), vec[i - 1] = mid;
        if (vec[i] > mid)
            return false;
    }
    // cout<<vec<<" ";
    if (*max_element(all(vec)) > mid)
        return false;
    return true;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    cin >> vec;
    int i = 0;
    int j = *max_element(all(vec));
    int ans = 1e9;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (help(n, vec, mid))
        {
            ans = min(ans, mid);
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
    cout << ans << "\n";
}

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << setprecision(6) << fixed;
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}