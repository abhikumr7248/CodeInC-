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
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i: v)
    cin>>i;
    int sum=v[0];
    reverse(v.begin(),v.end());
    v.pop_back();
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();++i)
    {
    int d = max(0, (v[i] - sum + 1) / 2);
    sum += d;
    v[i] -= d;
    /*z=v[i]/2;
     if(z>=sum)
     sum+=z;
     else
     {
         p=sum-z;
         sum+=p;
     }
     /*if(v[i]>sum)
     {
         while(v[i]>sum)
         {
         v[i]-=1;
         sum+=1;
         }
     }*/
    }
    cout<<sum<<endl;
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