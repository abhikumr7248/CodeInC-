#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int f=0;f<t;++f)
    {
        int a,b,x=0;
        cin>>a>>b;
        int s;
        s=a+b;
        int p[100];
        for(int j=0;s!=0;++j)
        {
            p[j]=s%10;
            s=s/10;
            x++;
        }
        int sum=0;
        for(int i=0;i<x;++i)
        {
            if(p[i]==0 || p[i]==6 || p[i]==9)
            sum=sum+6;
            else if(p[i]==1)
            sum=sum+2;
            else if(p[i]==5 || p[i]==3 || p[i]==2)
            sum=sum+5;
            else if(p[i]==4)
            sum=sum+4;
            else if (p[i] == 7)
                sum = sum + 3;
            else if (p[i] == 8)
                sum = sum + 7;
        }
        cout<<sum<<endl;
    }
    return 0;
}