#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; ++j)
    {
        int x,y;
        cin>>x>>y;
        int p=0;
        for(int i=0;p!=1;i++)
        {
            if (x > y)
            {
                int temp;
                temp = x;
                x = y;
                y = temp;
            }
            int a = x + (2 * i);
            int b = y + (1 * i);
            if (a >= b)
            {
                cout << i << endl;
                p = 1;
            }
        }
        
    } 
}