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
    int x,y;
    cin>>x>>y;
    /*if (x >= y)
        cout << "YES" << endl;
    else if(x!=y && y%x==0)
    cout<<"NO"<<endl;
    
    else if(x<y)
    {
        while(x<y)
        {
            if((3*x)%2 !=0)
            {
                cout<<"NO"<<endl;
                break;
            }
            x=x*3;
            x=x/2;
            
        }
        if (x > y)
        {
            cout << "YES" << endl;
            
        }
    }
    else
    cout<<"YES"<<endl;*/
    if (x >= y)
    {
        cout << "YES\n";
    }
    else
    {
        if (x % 2 == 1)
            x -= 1;
        if (x == 0)
        {
            cout << "NO\n";
        }
        else
        {
            if ((x * 3) / 2 == y)
            {
                cout << "YES\n";
            }
            else if ((x * 3) / 2 == (x + 1))
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
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