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
vector<string> vs;
void pwd()
{
    cout << "/";
    for (vector<string>::iterator it = vs.begin(); it != vs.end(); it++)
        cout << *it << "/";
    cout << endl;
}
void cd(char path[])
{
    if (path[0] == '/')
    {
        vs.clear();
        path++;
    }
    path = strtok(path, "/");
    while (path)
    {
        string t = path;
        if (t == "..")
            vs.pop_back();
        else
            vs.push_back(t);
        path = strtok(0, "/");
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
    char cmd[5], path[250];
    for (int i = 0; i < n; ++i)
    {
        cin >> cmd;
        if (strcmp(cmd, "pwd") == 0)
            pwd();
        else
        {
            cin >> path;
            cd(path);
        }
    }
        
    return 0;
}