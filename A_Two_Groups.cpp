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
int n;
vector<int> v;
public:
    void input()
    {
        cin>>n;
        v.resize(n);
        for(auto &i: v)
        cin>>i;
    }
    void solve()
    {
        ll sum1=0, sum2=0;
        for(int i=0;i<n;++i)
        {
            if(v[i]<0)
            sum1+=v[i];
            else
            sum2+=v[i];
        }
        cout<<abs(abs(sum1)-abs(sum2))<<endl;
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