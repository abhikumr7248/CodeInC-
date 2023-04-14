#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int n,x,y;
        string v;
        int one=0;
        int zero=0;
        cin>>n>>x>>y;
        cin>>v;
        int k=0;
        while(v[k]!='\0')
        {
            v[k] == '1' ? one++ : zero++;
            k++;
        }
        if (one > 0 && zero > 0)
            cout << min(x, y) << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}