#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
 int main()
 {
    int w;
    cin>>w;
    for(int r=0;r<w;++r)
    {
        ull x;
        cin>>x;
        if(x%2==1)
        cout<<x/2<<endl;
        else
        cout<<(x/2)-1<<endl;
    }
 }