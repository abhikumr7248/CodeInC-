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
    string name, status, captain;
    vector<string> rats, wc, men;
    cin >> n;
    while (n>0)
    {
        cin >> name >> status;
        if (status == "rat")
            rats.push_back(name);
        if (status == "woman" || status == "child")
            wc.push_back(name);
        if (status == "man")
            men.push_back(name);
        if (status == "captain")
            captain = name;
        n--;
    }
    for (auto name : rats)
        cout << name << '\n';
    for (auto name : wc)
        cout << name << '\n';
    for (auto name : men)
        cout << name << '\n';
    cout << captain;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
        solve();
    return 0;
}