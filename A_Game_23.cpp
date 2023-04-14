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
    int n;
    cin>>n;
    int k;
    cin>>k;
    int count=0;
    int p=k/n;
    if(k%n!=0)
    cout<<-1;
    else
    {
        while (p % 2 == 0)
        {
            p /= 2;
            count++;
        }
        while (p % 3 == 0)
        {
            p /= 3;
            count++;
        }
        if (p == 1)
        {
            cout << count;
        }
        else
        cout<<-1;
    }
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}