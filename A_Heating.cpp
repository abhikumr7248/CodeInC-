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
    int n,k;
    cin>>n>>k;
    /*if(n>k)
    cout<<1<<endl;
    else if(n==k)
    cout<<n<<endl;
    else
    {
        int z=k/n;
        vector<int> v(n,z);
        int r=k%n;
        if(r>0)
        {
            while(r>0)
            {
                for(int i=0;i<v.size();++i)
                {
                    v[i]+=1;
                    r--;
                    if(r==0)
                    break;
                }
            }
        }
        ull sum=0;
        for(int i=0;i<v.size();++i)
        {
            sum=sum+(v[i]*v[i]);
        }
        cout<<sum<<endl;

    }*/
    int q = k / n;
    int r = k % n;
    ull ans=(r * pow(q + 1, 2) + (n - r) * pow(q, 2));
    cout<<ans<<endl;
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