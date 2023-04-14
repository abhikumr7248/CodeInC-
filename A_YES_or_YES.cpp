#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        string ch;
        cin>>ch;
        string cm;
        cm="YES";
        transform(ch.begin(), ch.end(), ch.begin(), ::toupper);
        if(cm==ch)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

        
    }
}