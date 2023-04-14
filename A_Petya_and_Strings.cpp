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
    string a, b;
    	cin>>a>>b;
    	for (int i=0; i<a.size();i++) 
        {
    		if (a[i]<92) 
            {
    			a[i]+=32;
    		}
    		if (b[i]<92)
            {
    			b[i]+=32;
    		}
    	}
    	if (a<b) 
        {
    		cout<<-1;
    	}
    	if (b<a) 
        {
    		cout<<1;
    	}
    	if (a==b) 
        {
    		cout<<0;
    	}
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; ++i)
        solve();
    return 0;
}