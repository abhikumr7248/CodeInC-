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
/*------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    /*string s;
    cin>>s;
    string t;
    cin>>t;
    int k=0,p=0;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]==t[k])
        {
            k++;
        }
        else
        k=0;
        //cout<<k<<endl;
        if(k==t.length())
        {
            cout<<"YES"<<endl;
            p=1;
            break;
        }
        
    }
    if(p==0)
    cout<<"NO"<<endl;*/
    vector<int> a(266, 0);
    vector<int> b(266, 0);
    string s1, s2;
    cin >> s1 >> s2;
    int c = 0, d = 0;
    if (s2.size() < s1.size())
    {
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < s1.size(); i++)
        a[s1[i]]++;
    for (int i = 0; i < s2.size(); i++)
    {
        if (a[s2[i]] > 0)
        {
            a[s2[i]]--;
            d = i;
            c++;
            if (c == s1.size())
            {
                cout << "YES\n";
                return;
            }
        }
        else
        {
            i = i - c;
            while (d >= 0 && c > 0)
            {
                a[s2[d]]++;
                d--;
                c--;
            }
        }
    }
    cout << "NO\n";
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        solve();
    return 0;
}