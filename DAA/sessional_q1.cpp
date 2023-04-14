#include<bits/stdc++.h>
using namespace std;
void solve(int n,vector<string> p)
{
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
int main()
{

    cout << "Enter no of elements in the array" << endl;
    int n;
    cin >> n;
    cout << "Now enter the elements" << endl;
    cout << endl;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    solve(n,arr);
    vector<string> fin;
    for (int i = 0; i < n; i++)
    {

        string res = "(";
        for (int k = 0; k < n; k++)
        {
            if (k == i + 1)
            {
                res = res + ")(";
            }
            res = res + arr[k] + " ";
        }
        res = res + ")";
        fin.push_back(res);
    }
    fin.pop_back();
    cout << "Here the no of matrix multiplications possible are " << endl;
    for (auto it : fin)
        cout << it << endl;
}