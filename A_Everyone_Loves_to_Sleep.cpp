#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin >> r;
    for (int w = 0; w < r; ++w)
    {
        int n, h, m;
        cin >> n >> h >> m;
        int al[n][2];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                cin >> al[i][j];
            }
        }
        int s = (h * 60) + m;
        int ans=INT_MAX;
        int t1;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                t1=al[i][0]*60 + al[i][1];
                if(t1<s)
                t1=t1+(24*60);
                ans=min(ans,t1-s);
            }
        }
        int ha = ans / 60;
        int ma = ans % 60;
        cout << ha << " " << ma << endl;
    }
}