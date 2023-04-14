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
/*int getsum(int g)
{
    int sum=0;
    while(g>0)
    {
        sum=sum+g%10;
        g=g/10;
    }
    return sum;
}*/
void solve()
{
   /* int n,p=0,c=0;
    cin >> n;
    int d=n;
    while (d > 0)
    {
        if(d%10==9)
        p++;
        d = d / 10;
        c++;
    }
    if(p==c)
    {
    for (int i = 0; i < c; ++i)
    {
        if (i % 2 == 0)
            cout << 4;
        else
            cout << 5;
    }
    cout << " ";
    for (int i = 0; i < c; ++i)
    {
        if (i % 2 == 0)
            cout << 5;
        else
            cout << 4;
    }
    cout << endl;
    }
    else if (n % 2 == 0)
        cout << n / 2 << " " << n / 2 << endl;
    else
    {
        int x = (n + 1) / 2;
        if (x % 10 != 0)
            cout << n / 2 << " " << x << endl;
        else
        {
            int y = n / 2;
            y = y + 5;
            int z = n - y;
            cout << y << " " << z << endl;
        }
    }
    int n;
    cin>>n;
    int y=(n/2)+1;
    int x=n/2;
    if(n%2==0)
    cout<<x<<" "<<y<<endl;
    else
    {
        if(n/2%10==9)
        {
        while(abs(getsum(x)-getsum(y))>1)
        {
        x--;
        y--;
        }
        cout<<x<<" "<<y<<endl;
        }
        else
        {
            cout<<x<<" "<<y<<endl; 
        }

    }*/
   int n;
   cin >> n;
   int i = 0, flag = 0;
   int nDigits[10];
   while (n)
   {
       nDigits[i++] = n % 10;
       n /= 10;
   }
   vector<int> a(10), b(10);
   for(int j=0;j<i;++j)
   {
       if (nDigits[j] & 1)
       {
           a[j] = nDigits[j] / 2 + flag;
           b[j] = nDigits[j] / 2 + 1 - flag;
           flag = 1 - flag;
       }
       else
           a[j] = b[j] = nDigits[j] / 2;
   }
   int x = 0, y = 0, m = 1;
   for (int j = 0; j < i; ++j)
   {
       y += b[j] *m, x += a[j] *m;
       m *= 10;
   }
   cout << x << ' ' << y << '\n';
}

/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        solve();
    return 0;
}