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
    string s;
    cin>>n;
    cin>>s;
    int i=0,j=n-1;
    int x=0;
    while(i<j)
    {
        if(s[i]==s[j] &&x==0)
        {
            i++;
            j--;
        continue;
        }
        else if(s[i]==s[j] && x==1)
        break;
        else if(s[i]!=s[j])
        {
            s[j]=s[i];
            x=1;
        }
        i++;
        j--;
    }
    i=0;
    j=n-1;
    int y=0;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            cout<<"No"<<endl;
            y=1;
            break;
        }
        i++;
        j--;
    }
    if(y==0)
    cout<<"Yes"<<endl;
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