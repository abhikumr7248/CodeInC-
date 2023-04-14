#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    string s;
    for(int i=0;i<m;++i)
    cin>>s;
    for(int j=0;j<n;++j)
    {
        for(int i=0;i<m;++i)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                s[i] = 'G';
                s[i + 1] = 'B';
                i = i + 1;
            }
        }
    }
    for(int i=0;i<m;++i)
    cout<<s[i];
}