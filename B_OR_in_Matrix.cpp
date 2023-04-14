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
int n, m;
bool mas[100][100];
int ma[100][100];
bool d = true;
bool prover(int i, int j)
{
    bool k = false;
    for (int a = 0; a < m && !k; a++)
    {
        if (ma[i][a] == 0)
            k = true;
    }
    for (int a = 0; a < n && !k; a++)
    {
        if (ma[a][j] == 0)
            k = true;
    }
    return k;
}
void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> mas[i][j];
    }
    for (int i = 0; i < n && d; i++)
    {
        for (int j = 0; j < m && d; j++)
        {
            if (!mas[i][j])
            {
                for (int k = 0; k < m; k++)
                {
                    if (ma[i][k] != 1 )
                        ma[i][k] = -1;
                    else
                        d = false;
                }

                for (int h = 0; h < n; h++)
                {
                    if (ma[h][j] != 1 )
                        ma[h][j] = -1;
                    else
                        d = false;
                }
            }
        }
    }
    for (int i = 0; i < n && d; i++)
    {
        for (int j = 0; j < m && d; j++)
        {
            if (mas[i][j])
            {
                if (!prover(i, j))
                    d = false;
            }
        }
    }
    if (d)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (ma[i][j] == -1)
                    cout << 0 << " ";
                else
                    cout << 1 << " ";
            }
            cout << endl;
        }
    }
    else
        cout << "NO";
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
        solve();
    return 0;
}