#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;++i)
    {
        int n,k;
        cin>>n>>k;
        //vector<vector<int>> v1;
        if(k%4==0)
        cout<<"NO"<<endl;
        else
        {
            cout << "YES" << endl;
            if(k%4==1 || k%4==3)
            {
                for (int p = 1; p <= n; p+=2)
                {
                    
                    //v1.push_back({p, p+1});
                    cout<<p<<" "<<p+1<<endl;
                
                }
                    
                
            }
            else if(k%4==2)
            {
                for(int p=1;p<=n;p++)
                {
                    //v1.push_back({p,p+1});
                    if(p%4==0)
                    cout << p-1 << " " << p  << endl;
                }
                for (int p = 1; p <= n; p ++)
                {
                    //v1.push_back({p+1, p});
                    if(p%4==2)
                    cout << p << " " << p-1<< endl;
                }
            }
            
            
            /*for (int k = 0; k < v1.size(); ++k)
            {
                for (int j = 0; j < 2; ++j)
                {
                    cout << v1[k][j] << " ";
                }
                cout << endl;
            }*/
        }     
        
    }
}