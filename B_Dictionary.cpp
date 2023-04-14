#include<bits/stdc++.h>
using namespace std;
int main()
{
    int it;
    cin>>it;
    for(int i=0;i<it;++i)
    {
        string s;
        cin>>s;
        string temp="aa";
        unordered_map<string,int> mp;
        int r=1;
        for(temp[0]='a';temp[0]<='z';++temp[0])
        {
            for(temp[1]='a';temp[1]<='z';++temp[1])
            {
                if(temp[0]!=temp[1])
                {
                    mp[temp]=r;
                    r++;
                }
            }
        }
        cout<<mp[s]<<endl;


    }
}