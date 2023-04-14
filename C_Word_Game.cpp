#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin >> r;
    for (int w = 0; w < r; ++w)
    {
        int n;
        cin>>n;
        string v[3][n];
        for(int i=0;i<3;++i)
        {
            for(int j=0;j<n;++j)
            {
                cin>>v[i][j];
            }
        }
        int c1=0,c2=0,c3=0;
        unordered_map<string, int> mp1;
        unordered_map<string, int> mp2;
        unordered_map<string, int> mp3;
        for(int j=0;j<n;++j)
        mp1[v[0][j]]++;
        for (int j = 0; j < n; ++j)
            mp2[v[1][j]]++;
        for (int j = 0; j < n; ++j)
            mp3[v[2][j]]++;
        
        for(int j=0;j<n;++j)
        {
            if (mp1.find(v[1][j]) == mp1.end() && mp1.find(v[2][j]) == mp1.end())
            c1=c1+3;
            else if (mp1.find(v[1][j]) != mp1.end() && mp1.find(v[2][j]) == mp1.end()) 
            c1=c1+1;
            else if (mp1.find(v[1][j]) == mp1.end() && mp1.find(v[2][j]) != mp1.end())
            c1=c1+1;
        }
        for (int j = 0; j < n; ++j)
        {
            if (mp2.find(v[0][j]) == mp2.end() && mp2.find(v[2][j]) == mp2.end())
                c2 = c2 + 3;
            else if (mp2.find(v[0][j]) != mp2.end() && mp2.find(v[2][j]) == mp2.end())
                c2 = c2 + 1;
            else if (mp2.find(v[0][j]) == mp2.end() && mp2.find(v[2][j]) != mp2.end())
                c2 = c2 + 1;
        }
        for (int j = 0; j < n; ++j)
        {
            if (mp3.find(v[1][j]) == mp3.end() && mp3.find(v[0][j]) == mp3.end())
                c3 = c3 + 3;
            else if (mp3.find(v[1][j]) != mp3.end() && mp3.find(v[0][j]) == mp3.end())
                c3 = c3 + 1;
            else if (mp3.find(v[1][j]) == mp3.end() && mp3.find(v[0][j]) != mp3.end())
                c3 = c3 + 1;
        }
        cout<<c1<<" "<<c2<<" "<<c3;

        cout<<endl;
    }
}