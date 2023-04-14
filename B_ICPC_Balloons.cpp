#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;++i)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        int sum=0;
        for(int j=0;j<n;++j)
        {
            if(mp.find(s[j])==mp.end())
            {
                mp[s[j]]++;
                sum+=2;

            }
            else
            sum+=1;
        }
        cout<<sum<<endl;
    }

}