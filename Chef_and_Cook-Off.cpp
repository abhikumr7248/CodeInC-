#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int i=0;i<x;++i)
    {
        int count=0;
        vector<int> v1(5);
        for(int j=0;j<5;++j)
        cin>>v1[j];
        for(int k=0;k<5;++k)
        {
            if(v1[k]==1)
            count++;
        }
        if(count==0)
            cout << "Beginner"<<endl;
        else if(count==1)
            cout << "Junior Developer"<<endl;
        else if(count==2)
            cout << "Middle Developer"<<endl;
        else if(count==3)
            cout << "Senior Developer"<<endl;
        else if(count==4)
            cout << "Hacker"<<endl;
        else if(count==5)
            cout << "Jeff Dean"<<endl;
    }
    return 0;

}