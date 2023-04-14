#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int main()
{
    int r;
    cin>>r;
    for(int w=0;w<r;++w)
    {
        ull n;
        cin>>n;
        ull c = 0;
        cout<<n+(n/2*2)+(n/3*2)<<endl;
        /*for (ull i = 1; i <= n; ++i)
        {
            for (ull j = 1; j <= n; ++j)
            {
                int b = __gcd(i, j);
                ull x=floor((i*j)/(b*b));
                if (x<=3.0)
                    c++;
            }
        }
        cout<<c<<endl;*/
    }
}  