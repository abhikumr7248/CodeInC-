// symmetric swap                                                                            
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define llb long long
#include <algorithm>
#include <vector>

int main()
{
    int tb;
    cin >> tb;
    while (tb--)
    {
        int nb, kb;
        cin >> nb;
        int ab[nb];
        int bb[nb];

        // first array input
        for (int ib = 0; ib < nb; ib++)
            cin >> ab[ib];
        // second array input
        for (int ib = 0; ib < nb; ib++)
            cin >> bb[ib];

        for (int ib = 0; ib < nb; ib++)
        {
            // if its lesser we are going to swap it
            if (ab[ib] < bb[ib])
                swap(ab[ib], bb[ib]);
        }

        // make another 2d combined array
        vector<vector<int>> combined(nb, vector<int>(2));

        for (int ib = 0; ib < nb; ib++)
        {
            combined[ib][0] = ab[ib];
            combined[ib][1] = bb[ib];
        }

        sort(combined.begin(), combined.end());

        int maximumb = combined[nb - 1][0];
        int minimumb = combined[0][0];

        int ansb = maximumb - minimumb;

        int fofo[nb], firstMaxb[nb], lastMinb[nb], lastMaxb[nb];

        fofo[0] = combined[0][0];
        lastMinb[nb - 1] = combined[nb - 1][1];

        firstMaxb[0] = combined[0][0];
        lastMaxb[nb - 1] = combined[nb - 1][1];

        for (int ib = 1; ib < nb; ib++)
        {
            fofo[ib] = min(fofo[ib - 1], combined[ib][0]);
            firstMaxb[ib] = max(firstMaxb[ib - 1], combined[ib][0]);
        }

        for (int i = nb - 2; i >= 0; i--)
        {
            lastMinb[i] = min(lastMinb[i + 1], combined[i][1]);
            lastMaxb[i] = max(lastMaxb[i + 1], combined[i][1]);
        }

        for (int i = nb - 1; i >= 0; i--)
        {
            swap(combined[i][0], combined[i][1]);
            if (i == 0)
            {
                maximumb = lastMaxb[0];
                minimumb = lastMinb[0];
            }
            else
            {
                maximumb = max(firstMaxb[i - 1], lastMaxb[i]);
                minimumb = min(fofo[i - 1], lastMinb[i]);
            }
            ansb = min(ansb, maximumb - minimumb);
        }

        cout << ansb << endl;
    }
    return 0;
}