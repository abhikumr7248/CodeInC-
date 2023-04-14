#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;++i)
    {
        int n,m;
        cin>>n>>m;
        int k;
        k=n+m-1;
        if(k%2==0)
            cout << "Burenka"<<endl;
        else
        cout<<"Tonya"<<endl;
    }
}