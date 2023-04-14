#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int x = rand();
        arr[i] = x;
    }
    sort(arr, arr + n);
    cout << "Smallest number is " << arr[0] << endl;
    cout << "Largest number is " << arr[n - 1] << endl;
}
