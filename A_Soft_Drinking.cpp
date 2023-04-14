#include <bits/stdc++.h>
using namespace std;
int main()
{
    long a,b,c,d,e,f,g,h;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    int x=ceil(b*c);
    int r=ceil(x/g);
    int s=ceil(d*e);
    int t=ceil(f/h);
    int q=min(r,min(s,t));
    cout<<q/a;
}