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
    int k, n;
    cin >> k >> n;
    vector<int> arr;
    for (int i = 1; i <= n; i++)
    {
        arr.push_back(i);
    }
    int num = 0;
    int jump = 1;
    int i = 0;
    vector<int> res;
    while (i < n && num < k)
    {
        if (i < n)
        {
            res.push_back(arr[i]);
            
            arr[i] = -1;
            i = i + jump;
            jump++;
            num++;
        }
    }
    i = n - 1;
    while (num < k)
    {
        if (arr[i] != -1)
        {
            
            res.push_back(arr[i]);
            num++;
        }
        i--;
    }
    sort(res.begin(), res.end());
    
    for (auto it : res)
        cout << it << " ";
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