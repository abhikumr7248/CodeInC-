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
    //sort(v.begin(),v.end());
    int sum=0;
    for(int i=0;i<v.size();++i)
    sum+=v[i];
    int x=0;
    for(int i=0;i<v.size()-1;++i)
    {
    if (v[i] == -1 && v[i+1] == -1)
    {
        cout << sum + 4 << endl;
        x=1;
        break;
    }

    
    }
    if(x==0)
    {
    for (int i = 0; i < v.size() - 1; ++i)
    {
        if ((v[i] == -1 && v[i + 1] == 1) || (v[i] == 1 && v[i + 1] == -1))
        {
            cout << sum<< endl;
            x = 1;
            break;
        }
    }
    }
    if(x==0)
    cout<<sum-4<<endl;
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