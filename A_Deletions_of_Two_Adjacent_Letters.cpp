#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for(int w=0;w<r;++w)
    {
        string s;
        cin>>s;
        char c;
        cin>>c;
        int f=0;
        if(c==s[0])
        cout<<"YES"<<endl;
        else
        {
            for (int i = 0; i < s.length(); ++i)
            {
                if (s[i] == c)
                {
                    if (i % 2 == 0)
                    {
                        cout << "YES" << endl;
                        f = 1;
                        break;
                    }
                }
            }
            if (f == 0)
                cout << "NO" << endl;
        }
        
        
    }
}