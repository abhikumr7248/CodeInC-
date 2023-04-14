#include<bits/stdc++.h>
using namespace std;
struct knap
{
    float w;
    float v;
    float r;
};
int main()
{
    int c;
    cout<<"Enter the capacity: ";
    cin>>c;
    int n;
    cout<<"Enter the total no. of items: ";
    cin>>n;
    struct knap k[n];
    cout<<"Enter the value and weight respectively: ";
    for(int i=0;i<n;++i)
    {
        cin>>k[i].v>>k[i].w;
    }
    for(int i=0;i<n;++i)
    {
        k[i].r=float(k[i].v/k[i].w);
    }
    for((int i=0;i<n;++i)
    {
        for(int j=i;j<n;++j)
        {
        if(k[i].r<k[j].r)
        swap(k[i].r,k[j].r);
        }
    }
    for(int i=0;i<n;++i)
    {
        cout<<i<<" "<<k[i].r<<" "<<k[i].v<<endl;
    }
}