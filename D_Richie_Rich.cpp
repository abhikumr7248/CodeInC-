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
    ull n;
    cin>>n;
    float x1, x2, discriminant, realPart, imaginaryPart;
    int a,b,c;
    a=1;
    b=1;
    c=-1*2*n;
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        if(x1>0)
        cout<<ceil(x1);
        else
        cout<<ceil(x2);
    }

    else if (discriminant == 0)
    {
        
        x1 = -b / (2 * a);
        cout<<ceil(x1);
    }
}

int main()
{


    // ll t; cin>>t;

    // while(t--)
    run1();
}