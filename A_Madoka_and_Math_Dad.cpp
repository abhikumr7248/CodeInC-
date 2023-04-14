#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;++i)
    {
        int x;
        cin>>x;
        vector<int> v1;
        if(x==1)
        cout<<1;
        else
        {
            int c2 = 0;
            int c1 = 0;
            if (x %3 == 0) 
            {
                int p = x / 3;
                c2 = p;
                c1 = p;
                while (c1 > 0)
                {
                    v1.push_back(2);
                    v1.push_back(1);
                    c1--;
                }
            }
            else if ((x - 1) % 3 ==0)
            {
                int p = (x - 1) / 3;
                c2 = p;
                c1 = p + 1;
                while (c2 > 0)
                {
                    v1.push_back(1);
                    v1.push_back(2);
                    c2--;
                }
                v1.push_back(1);
            }
            else if ((x + 1) % 3 == 0)
            {
                int p = (x + 1) / 3;
                c2 = p;
                c1 = p - 1;
                while (c1 > 0)
                {
                    v1.push_back(2);
                    v1.push_back(1);
                    c1--;
                }
                v1.push_back(2);
            }
            
            for(int l=0;l<v1.size();++l)
            cout<<v1[l];
        }
        cout<<endl;
    }
}