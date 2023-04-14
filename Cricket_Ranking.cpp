#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int r1,w1,c1,r2,w2,c2;
        cin>>r1>>w1>>c1>>r2>>w2>>c2;
        if ((r1 > r2 && w1 > w2 && c1 > c2) || (r1 > r2 && w1 > w2) || (r1 > r2 && c1 > c2) || (w1 > w2 && c1 > c2))
        cout<<"A"<<endl;
        else
        cout<<"B"<<endl;
    }
    return 0;
}