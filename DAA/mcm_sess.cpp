#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    int P[] = {2,3,5,1};
    int m[5][5] = {0};
    int s[5][5] = {0};
    int j, min, q;
    for (int d = 1; d < n - 1; d++)
    {
        for (int i = 1; i < n - d; i++)
        {
            j = i + d;
            min = INT_MAX;
            for (int k = i; k <= j - 1; k++)
            {
                q = m[i][k] + m[k + 1][j] + P[i - 1] * P[k] * P[j];
                if (q < min)
                {
                    min = q;
                    s[i][j] = k;
                }
                m[i][j] = min;
            }
        }
    }
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {

            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << m[1][n - 1] << endl;
}