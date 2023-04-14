#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;++i)
    {
        vector<int> res;
        int n;
        cin>>n;
        if(n<=9)
        res.push_back(n);
        else if(n>9)
        {
            int x=9;
            while(n>0)
            {
                if(n-x>=0)
                {
                    n=n-x;
                    res.push_back(x);
                }
                x--;
            }
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();++i)
        cout<<res[i];
        cout<<endl;
    }

}