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
    /*string v;
    cin >> v;
    ull n = stoi(v);
    vector<int> s;
    while (n > 0)
    {
        s.push_back(n % 10);
        n = n / 10;
    }
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] == '0')
        {
            s.push_back(0);
        }
        else
            break;
    }
    for(int i=0;i<v.size();++i)
    {
        s.push_back(v[i]-'0');
    }
    ull sum=0;
    //reverse(s.begin(), s.end());
    vector<int> temp=s;
    sort(temp.begin(),temp.end());
    int po=0;
    int count=0;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]==0)
        count++;
    }
    if(count==s.size())
    cout<<"red"<<endl;
    else
    {
    if(temp[0]!=0)
    cout<<"cyan"<<endl;
    else
    {
        for(int i=0;i<s.size();++i)
        {
            if(s[i]!=0)
            {
                if(s[i]%2==0)
                {
                    po=1;
                    break;
                }
            }
        }
        if(po==0)
        cout<<"cyan"<<endl;
        else
        {
        for (int i = 0; i < s.size(); ++i)
                sum += s[i];
        if (sum % 3 == 0)
                cout << "red" << endl;
        else
                cout << "cyan" << endl;
        }
    }
    }*/
    string s1;
    cin >> s1;
    int sum=0,y=0,a=0;
    int x = s1.length();
    for (int i = 0; i < x; i++)
    {
        sum += s1[i] - '0';
        if (s1[i] % 2 == 0)
        {
            y++;
            if (s1[i] == '0')
                a = 1;
        }
    }
    if (a == 1 && y >= 2 && sum % 3 == 0)
    {
        cout << "red" << endl;
    }
    else
    {
        cout << "cyan" << endl;
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