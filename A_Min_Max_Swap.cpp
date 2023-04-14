#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        int a;
        cin>>a;
        int ar[a],br[a];
        for(int j=0;j<a;++j)
        cin>>ar[j];
        for (int j = 0; j < a; ++j)
            cin >> br[j];
        
        for(int j=0;j<a;++j)
        {
            if(ar[j]>br[j])
            swap(ar[j],br[j]);
        }
        sort(ar,ar+a);
        sort(br,br+a);
        cout<<ar[a-1]*br[a-1]<<endl;

    }
}