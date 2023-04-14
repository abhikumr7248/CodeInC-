#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(),v.end(),greater<int>());
    int count = 0;
    int x,y;
    int k=0;
    for (int i = 0; i < v.size(); ++i)
    {
        x=d/v[i];
        if(d%v[i]!=0)
        {
            y = x + 1;
            k=1;
        }
        else
        {
            y=x;
            k=2;
        }
        if (v[i] > d)
        {
            n--;
            count++;
        }
        else if (n >= y && k==1)
        {
            n = n - (x+1);
            count++;
        }
        else if (n > y && k == 2)
        {
            n = n - (x + 1);
            count++;
        }
            else break;
    }
    cout << count;
}