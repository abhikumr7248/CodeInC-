#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int l=0;l<a;++l)
    {
        long long n;
        cin>>n;
        long long r=0;
        if(n==1)
        r=2;
        else
        {
            if (n % 3 == 0)
                r = n / 3;
            
            else
            {
                r = n / 3;
                r = r + 1;
            }
        }
        

        cout<<r<<endl;
    }
}