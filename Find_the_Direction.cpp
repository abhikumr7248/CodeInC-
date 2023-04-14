#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int a = 0;
        int b = 1;
        int c = 2;
        int d = 3;
        int count = 0;
        cin>>x;
        do
        {
            if(x==a)
            {
                cout<<"North"<<endl;
                count++;
            }
            else if(x==b)
            {
                cout<<"East"<<endl;
                count++;
            }
            else if(x==c)
            {
                cout<<"South"<<endl;
                count++;
            }
            else if(x==d)
            {
                cout<<"West"<<endl;
                count++;
            }
            a = a + 4;
            b = b + 4;
            c = c + 4;
            d = d + 4;
        }while(count==0);
    }
    return 0;
}