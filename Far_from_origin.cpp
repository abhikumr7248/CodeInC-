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
    int b[4], i;
        cin>>b[0]>>b[1]>>b[2]>>b[3];
        if ((sqrt((b[0] - 0) * (b[0] - 0) + (b[1] - 0) * (b[1] - 0))) > (sqrt((b[2] - 0) * (b[2] - 0) + (b[3] - 0) * (b[3] - 0))))
        {
            cout<<"ALEX"<<endl;
        }
        else if ((sqrt((b[0] - 0) * (b[0] - 0) + (b[1] - 0) * (b[1] - 0))) < (sqrt((b[2] - 0) * (b[2] - 0) + (b[3] - 0) * (b[3] - 0))))
        {
            cout<<"BOB"<<endl;
        }
        else
        {
            cout<<"EQUAL"<<endl;
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