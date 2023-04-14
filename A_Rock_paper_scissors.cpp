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
    string f, m, s;
    cin >> f >> m >> s;
    if ((f == "paper" && m == "paper" && s == "scissors") || (f == "rock" && m == "rock" && s == "paper") || (f == "scissors" && m == "scissors" && s == "rock"))
    {
        cout << "S" << endl;
    }
    else if ((f == "paper" && s == "paper" && m == "scissors") || (f == "rock" && s == "rock" && m == "paper") || (f == "scissors" && s == "scissors" && m == "rock"))
    {
        cout << "M" << endl;
    }
    else if ((s == "paper" && m == "paper" && f == "scissors") || (s == "rock" && m == "rock" && f == "paper") || (s == "scissors" && m == "scissors" && f == "rock"))
    {
        cout << "F" << endl;
    }
    else
    {
        cout << "?" << endl;
    }
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