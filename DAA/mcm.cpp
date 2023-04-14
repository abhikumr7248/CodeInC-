#include <bits/stdc++.h>
using namespace std;

int P(int n)
{
    if (n <= 2)
        return 1;
    else
    {
        int sum = 0;
        for (int k = 1; k < n; k++)
            sum = sum + P(k) * P(n - k);
        return sum;
    }
}

int num_multi(int a, int b, int **arr, int *p)
{
    if (a == b)
    {
        return 0;
    }
    else
    {
        int min = _INT32_MAX_;
        for (int k = a; k < b; k++)
        {
            int sum = num_multi(a, k, arr, p) + num_multi(k + 1, b, arr, p) + p[a] * p[k + 1] * p[b + 1];
            if (sum < min)
            {
                min = sum;
            }
        }
        return min;
    }
}

int main()
{
    int num;
    cout << "Enter the Number of matrices : " << endl;
    cin >> num;

    // creating dynamic 1d array for values of matrix rows and coloums
    int *p = new int[num + 1];
    for (int i = 0; i <= num; i++)
    {
        cout << "p" << i << ": ";
        cin >> p[i];
    }

    // creating dynamic 2d array for final values
    int **arr = new int *[num];
    for (int i = 0; i < num; i++)
        arr[i] = new int[num];

    // calculating the matrix
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i >= j)
            {
                arr[i][j] = 0;
            }
            else if (j > i)
            {
                arr[i][j] = num_multi(i, j, arr, p);
            }
        }
        cout << endl;
    }

    // output
    cout << "number of parenthisized matrices that can be formed are: " << P(num) << endl;
    for (int i = 0; i <= num; i++)
        cout << p[i] << endl;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}