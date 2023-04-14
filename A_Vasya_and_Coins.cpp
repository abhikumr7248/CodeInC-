#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    for(int w=0;w<r;++w)
    {
        int a,b;
        cin>>a>>b;
        if(a==0 || (a==0 && b==0))
        cout<<1<<endl;
        else
        cout<<(a+b*2)+1<<endl;
    }
}