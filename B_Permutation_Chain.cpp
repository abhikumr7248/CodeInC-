#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;++i)
    {
        int n;
        cin>>n;
        cout<<n<<endl;
        for(int j=0;j<n;++j)
        {
            int v=2;
            for(int k=0;k<n;++k)
            {
                if(j==k) 
                cout<<1<<" ";
                else
                cout<<v++<<" ";
            }
            cout<<endl;
        }
    }
}