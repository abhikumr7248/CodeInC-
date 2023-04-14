#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int x1=1, y2=1;
    int c = 0;
    while (x1<=9)
    {
        while(y2<=8)
        {
            int d = 0;
            d = ((b * x1) + (a * y2) - (y2 * x1));
            if (d == 0)
                c++;
            y2++;
        }
        
        x1++;
    }

    cout << c << endl;

    return 0;
}
