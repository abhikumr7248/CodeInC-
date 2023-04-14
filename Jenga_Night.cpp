#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    do
    {
        int n,x;
        cin>>n>>x;
        if(x%n==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

        t--;
    } while (t > 0);
}