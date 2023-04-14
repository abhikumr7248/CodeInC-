#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int p=0;p<a;++p)
    {
        char mat[8][8];
        for(int i=0;i<8;++i)
        {
            for(int j=0;j<8;++j)
            {
                cin>>mat[i][j];
            }
        }
        int c,d;
        for(int i=1;i<7;++i)
        {
            for(int j=1;j<7;++j)
            {
                if (mat[i - 1][j - 1] == '#' && mat[i - 1][j + 1] == '#' && mat[i + 1][j - 1] == '#' && mat[i + 1][j + 1] == '#')
                {
                    c=i+1;
                    d=j+1;
                    break;
                }
            }
        }
        cout<<c<<" "<<d<<endl;
    }
}