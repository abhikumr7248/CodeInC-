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
    // int n;
    // cin>>n;
    // string s;
    // cin>>s;
    // int count=0;
    // int i;
    // for(i=0;i<n;++i)
    // {
    //     if(s[i]=='M' || s[i]=='m')
    //     {
    //         count++;
        
    //     }
    //     if(i<n-1 && s[i+1]!='M' && s[i+1]!='m' )
    //     break;
    // }
    // int j;
    // for(j=i+1;j<n;++j)
    // {
    //     if(s[j]=='M' || s[j]=='m')
    //     break;
    //     if(s[j]=='E' || s[j]=='e')
    //     {
    //         count++;
            
    //     }
    //     if (j< n - 1 && s[j+ 1] != 'E' && s[j + 1] != 'e')
    //         break;
    // }
    // for (i = j+1; i < n; ++i)
    // {
    //     if (s[i] == 'M' || s[i] == 'm' || s[i] == 'e' || s[i] == 'E')
    //         break;
    //     if (s[i] == 'O' || s[i] == 'o')
    //     {
    //         count++;
            
    //     }
    //     if (i < n - 1 && s[i + 1] != 'O' && s[i + 1] != 'o')
    //         break;
    // }
    // for (j = i+1; j < n; ++j)
    // {
    //     if (s[j] == 'M' || s[j] == 'm' || s[j] == 'e' || s[j] == 'E' || s[j] == 'o' || s[j] == 'O')
    //         break;
    //     if (s[j] == 'W' || s[j] == 'w')
    //     {
    //         count++;
           
    //     }
    // }
    // unordered_map<char,int> mp;
    // for(auto &it: s)
    // {
    //     if(isupper(it))
    // mp[tolower(it)]++;
    // else
    // mp[it]++;
    // }
    // if(mp.size()!=4)
    // cout<<"NO"<<endl;
    // else if(count==4)
    // cout<<"YES"<<endl;
    // else
    // cout<<"NO"<<endl;
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; s[i]; i++)
    {
        if ('A' <= s[i] && s[i] <= 'Z')
            s[i] = s[i] - 'A' + 'a';
    }
    string ans;
    for (int i = 0; s[i]; i++)
    {
        if (ans.empty())
            ans.push_back(s[i]);
        else if (s[i] != ans.back())
            ans.push_back(s[i]);
    }
    if (ans == "meow")
        cout << "YES" <<endl;
    else
        cout << "NO" << endl;
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
