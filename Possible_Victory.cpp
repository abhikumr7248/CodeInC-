#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,o,c;
    cin>>r>>o>>c;
    int x;
    x=20-o;
    int y;
    y=x*6*6;
    if((c+y)>r)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}