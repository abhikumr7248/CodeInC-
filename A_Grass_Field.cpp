#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;++i)
    {
        int arr[2][2];
        cin>>arr[0][0]>>arr[0][1]>>arr[1][0]>>arr[1][1];
        int count=0;
        for(int j=0;j<2;++j)
        {
            for(int k=0;k<2;++k)
            {
                if(arr[j][k]==1)
                count++;
            }
        }
        int ans;
        //if(count%2==0)
        ans=count/2;
        //else if(count%2==1)
        //ans=(count/2)+1;
        if(count==1)
        ans+=1;

        cout<<ans<<endl;

    }
}