#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin>>w;
    for(int r=0;r<w;++r)
    {
        int x=0;
        for(int i=0;i<8;++i)
        {
            string s;
            cin >> s;
            if (s == "RRRRRRRR")
            x++;
        }
        if(x==0)
        cout<<"B"<<endl;
        else
        cout<<"R"<<endl;
    }
}