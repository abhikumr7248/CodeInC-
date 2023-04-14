#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for(int w=0;w<r;++w)
    {
        string n="Timur";
        sort(n.begin(),n.end());
        string s;
        int x;
        cin>>x;
        cin>>s;
        sort(s.begin(),s.end());
        if(s==n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
}