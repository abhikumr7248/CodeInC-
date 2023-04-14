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
    cin >> n;
    int pos = 0, neg = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > 0) {
            pos++;
        } else {
            neg++;
        }
    }
 
    for (int i = 1; i <= pos; i++)
        cout << i << ' ';
    for (int i = pos - 1; i >= pos - neg; i--)
        cout << i << ' ';
    cout << endl;
    for (int i = 1; i <= neg; i++)
        cout << "1 0 ";
    for (int i = 1; i <= pos - neg; i++)
        cout << i << ' ';
    cout << endl;
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(auto &i: v)
//     cin>>i;
//     map<int,int> mp,mp1;
//     vector<int> v1,v2;
//     if(v.size()==1)
//     {
//     cout<<1<<endl;
//     cout<<1<<endl;
//     }
//     else
//     {
    
    
//     for(int i=0;i<n;++i)
//     {
//         if(v[i]>0)
//         {
//             v1.push_back(v[i]);
//             mp[v[i]]++;
//         }
//         else
//         {
//             v2.push_back(v[i]);
//             mp1[abs(v[i])]++;
//         }
//     }
//     vector<int> a1,a2;
//     int i;
//     for(i=0;i<v1.size();++i)
//     {
//         a1.push_back(i+1);
//     }
//     for(int j=0;j<v2.size();++j)
//     {
//         if(mp.size()>0 && mp.find(abs(v2[j]))!=mp.end())
//         {
//             i--;
//         a1.push_back(i);
//         }
//     }
//    for(int j=0;j<a1.size();++j)
//     cout<<a1[j]<<" ";
//     cout<<endl;
//    vector<int> v3;
//     for(int j=0;j<v1.size();++j)
//     {
//         if(mp1.size()>0 && mp1.find(v1[j])!=mp1.end())
//         {
//             a2.push_back(1);
//             a2.push_back(0);
//         }
//         else
//         v3.push_back(v[j]);
//     }
//     int z=a2[a2.size()-1];
//     for(int j=0;j<v3.size();++j)
//     {
//         z=z+1;
//         a2.push_back(z);
//     }
//     for(int j=0;j<a2.size();++j)
//     cout<<a2[j]<<" ";
//     cout<<endl;
    


//     }
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