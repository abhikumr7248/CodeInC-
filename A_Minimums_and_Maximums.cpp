#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;++i)
    {
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(max(l1,l2)<=min(r1,r2))
        cout<<max(l1,l2);
        else
        cout<<l1+l2;

        cout<<endl;
    }
}