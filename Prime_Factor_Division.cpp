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
void findMajority(int arr[], int n)
{

    int maxCount = 0;
    int index = -1; // sentinels
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        // update maxCount if count of
        // current element is greater
        if (count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }
    int x = n / 2;

    // if maxCount is greater than n/2
    // return the corresponding element
    if (maxCount <= (n / 2) + (x + 1) / 2)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
int n;
cin >> n;
n = 2*n;
int a[n];
for (int i = 0; i < n; i++)
    cin >> a[i];
findMajority(a, n);
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        solve();
    return 0;
}