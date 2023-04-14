#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int p=0;p<a;++p)
    {
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        int count=0;
        //int n = s.length();

        
        //for (int i = 0; i < n / 2; i++)
         //   swap(s[i], s[n - i - 1]);
    
        for(int j=0;j<s.length();++j)
        {
            
                mp[s[j]]++;
                if (mp.size() > 3)
                {
                    count++;
                    mp.clear();
                    mp[s[j]]++;
                }
                
            
        }
        if(mp.size()!=0)
        count++;
        
        cout<<count<<endl;
    }
}
