#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row;
    cin>>row;
    int arr[row][3];
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<3;++j)
        {
            cin>>arr[i][j];
        }
    }
    int ans=0;
    int count;
    for (int i = 0; i < row; ++i)
        {
            count = 0;
            for (int j = 0; j < 3; ++j)
            {
                if (arr[i][j] == 1)
                    count++;
            }
            if (count >= 2)
                ans++;
        }
    cout<<ans;
    return 0;

}