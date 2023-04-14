#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin >> w;
    for (int r = 0; r < w; ++r)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int step = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                for (int j = i; j < n; ++j)
                {
                    if (s[j] == '1')
                        s[j] = '0';
                    else
                        s[j] = '1';
                }
                step++;
                unordered_map<char, int> mp;
                for (int k = i; k < n; ++k)
                    mp[k]++;
                if (mp.size() == 1 && s[i] == '1')
                {
                    break;
                }
            }
        }
        cout << step - 1 << endl;
    }
}

