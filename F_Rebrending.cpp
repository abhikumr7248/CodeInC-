
#include <bits/stdc++.h>
#pragma GCC optimize("O2,unroll-loops")
// #pragma GCC optimize("no-stack-protector,fast-math")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<pii, int> piii;
typedef pair<ll, ll> pll;
#define debug(x) cerr << #x << '=' << (x) << endl;
#define debugp(x) cerr << #x << "= {" << (x.first) << ", " << (x.second) << "}" << endl;
#define debug2(x, y) cerr << "{" << #x << ", " << #y << "} = {" << (x) << ", " << (y) << "}" << endl;
#define debugv(v)             \
    {                         \
        cerr << #v << " : ";  \
        for (auto x : v)      \
            cerr << x << ' '; \
        cerr << endl;         \
    }
#define all(x) x.begin(), x.end()
#define pb push_back
#define kill(x) return cout << x << '\n', 0;

const ld eps = 1e-7;
const int inf = 1000000010;
const ll INF = 10000000000000010LL;
const int mod = 1000000007;
const int MAXN = 100010, LOG = 20;

int n, m, k, u, v, x, y, t, a, b;
int A[MAXN], B[MAXN], ans[MAXN * 3];
vector<pii> Q[MAXN];

struct SEGMENT
{
    int seg[MAXN << 1];
    SEGMENT()
    {
        memset(seg, -63, sizeof(seg));
    }
    void Set(int pos, int val)
    {
        seg[pos + MAXN] = max(seg[pos + MAXN], val);
        for (pos += MAXN; pos > 1; pos >>= 1)
            seg[pos >> 1] = max(seg[pos], seg[pos ^ 1]);
    }
    int Get(int l, int r)
    {
        int res = seg[0];
        for (l += MAXN, r += MAXN; l < r; l >>= 1, r >>= 1)
        {
            if (l & 1)
                res = max(res, seg[l++]);
            if (r & 1)
                res = max(res, seg[--r]);
        }
        return res;
    }
} seg1, seg2;

inline int getlb(int x)
{
    return lower_bound(B, B + n + 2, x) - B;
}
inline int getub(int x)
{
    return upper_bound(B, B + n + 2, x) - B;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> n;
    cin >> m;
    for (int i = 1; i <= n; i++)
        cin >> A[i], B[i] = A[i];
    
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        Q[y].pb({x, i});
    }
    B[n + 1] = inf;
    sort(B, B + n + 2);
    for (int i = 1; i <= n; i++)
    {
        //		debug(i)
        int last = -inf, xid = getlb(A[i]);
        while (1)
        {
            int pos = seg1.Get(getub((A[i] + last) / 2), xid + 1);
            if (pos < 0 || A[pos] == last)
                break;
            seg2.Set(pos, -(A[i] - A[pos]));
            last = A[pos];
            //			debug2(pos, i)
        }
        last = 2 * inf - A[i];
        while (1)
        {
            int pos = seg1.Get(xid, getlb((A[i] + last + 1) / 2));
            if (pos < 0 || A[pos] == last)
                break;
            seg2.Set(pos, -(A[pos] - A[i]));
            last = A[pos];
            //			debug2(pos, i)
        }
        seg1.Set(xid, i);
        for (pii p : Q[i])
            ans[p.second] = -seg2.Get(p.first, n);
    }
    for (int i = 1; i <= m; i++)
        cout << ans[i] << '\n';

    return 0;
}
/*
3
3 1 4
1
1 3

*/
