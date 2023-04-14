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
    /*int sum=v[0];
    int k;
    for(int i=1;i<n;++i)
    {
        if(sum!=v[i])
        sum+=v[i];
        else
        break;
        k=i;
    }
    if(k==n-1)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;++i)
        cout<<v[i]<<" ";
    }
    else
    {
        int x=0;
        for(int i=0;i<n;++i)
        {
            if(v[i]==v[0])
            x++;
        }
        if(x==n)
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            sort(v.begin(),v.end());
            for(int i=n-1;i>=0;--i)
            cout<<v[i]<<" ";
        }
    }
    cout<<endl;*/
    if (v.front() == v.back())
    {
    cout << "NO\n";
    return;
    }

    cout << "YES\n";
    cout << v.back() << ' ';
    v.pop_back();
    for (int g : v)
    cout << g << ' ';
    cout << endl;
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