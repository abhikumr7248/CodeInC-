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
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findGCD(vector<int> &arr, int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i: v)
    cin>>i;
    int t = findGCD(v,n);
    vector<int> temp;
    for (int i = 0; i < n; ++i)
    {
        for(int j=i+1;j<n;++j)
        {
            temp.push_back(__gcd(v[i],v[j]));
        }
    }
    int y=0;
    if(t>n)
    cout<<"No"<<endl;
    else
    {
        for(int i=0;i<temp.size();++i)
        {
            if(temp[i]<=2)
            {
                cout<<"Yes"<<endl;
                y=1;
                break;
            }
        }
        if(y==0)
        cout<<"No"<<endl;
    }
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