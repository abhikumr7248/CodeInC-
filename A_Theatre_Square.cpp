#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*unsigned long long l,b;
    cin>>l>>b;
    unsigned long long n;
    cin >> n;
    unsigned long long s;
    s=n*n;
    unsigned long long r;
    r=l*b;
    unsigned long long res=r/s;
    if(s>=r)
    cout<<1;
    else if(res*s==r)
    cout<<res;
    else if(res*s<r)
    {
        unsigned long long p = l / n;
        unsigned long long q = b / n;
        if(l%n==0)
        {
            cout << res + p;
        }
        else if(b%n==0)
        {
            cout<<res+q;
        }
        else
        {
            if(l==b)
                cout << res + p + q;
                
            else if(l<b)
                cout << res + q+1;
            else
                cout << res + p+1;
        }
            

    }*/
    unsigned long long l,b,n,p,q;
    cin>>l>>b>>n;
    p=l/n;
    q=b/n;
    if(l%n!=0) p++;
    if(b%n!=0) q++;
    cout<<p*q;
}