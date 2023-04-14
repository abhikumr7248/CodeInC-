#include <bits/stdc++.h>

#define ull unsigned long long
#define ll long long
using namespace std;
//   taskkill -im striver.exe -f
// cout<<fixed<<setprecision(12)<<res<<endl;
// printf("%.10f\n",diff );

// const int N=1e8;
// vector<bool> sieve(N+1,true);//100000005
// vector<int> sieve_res(8000000);
// ll ji=1;
// void generate_sieve(){
//     sieve[0]=0;sieve[1]=0;
//     for(int i=4;i<=N;i=i+2) sieve[i]=0;
//     for(int i=3;i*i<=N;i=i+2)
//         if(sieve[i])
//             for(int j=i*i;j<=N;j=j+i+i)sieve[j]=0;
//     sieve_res[0]=2;
//     for(int i=3;i<=N;i=i+2)
//         if(sieve[i]==1){ sieve_res[ji]=i;ji++;}
// }
// void print_sieve(){
//     ll i=1;
//     while(i<=ji){
//         cout<<sieve_res[i-1]<<endl;
//         i=i+100;
//     }
// }

void run1()
{
   int p,n;
   cin>>p>>n;
   vector<int> v(n);
   for(auto &i: v)
   cin>>i;
   int x=0,y=0,z=0;
   int j=1;
   for(int i=0;i<n;++i)
   {
    if(p==v[i])
    {
    x++;
    break;
    }
   }
   if(x==0)
   cout<<p;
   else
   {
    cout<<2;
   }

}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // ll t; cin>>t;

    // while(t--)
    run1();
}