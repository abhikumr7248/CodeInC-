#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    int w;
    cin >> w;
    for (int r = 0; r < w; ++r)
    {
        ull n;
        cin>>n;
        if(n%2050!=0)
        cout<<-1<<endl;
        else
        {
            ull int k;
            ull int sum=0;
            k=n/2050;
            while(k>0)
            {
                sum=sum+k%10;
                k=k/10;
            }
            cout<<sum<<endl;
        }
    }
}