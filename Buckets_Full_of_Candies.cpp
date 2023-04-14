#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        long int n, m, l;
        cin >> n >> m >> l;
        long int j=n;
        while(j>0)
        {
            long int maxb = l + (j - 1);
            if(maxb <= m)
            {
                m = m - maxb;
            }
            else
            {
                --j;
            }
            if(j==0)
            exit;
            
        }
        cout << m << endl;
    }
    return 0;
}