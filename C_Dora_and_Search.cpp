#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll signed long long
#define ld long double
#define to_low(s) transform(s.begin(), s.end(), s.begin(), ::tolower); // convert string to lowercase
#define to_up(s) transform(s.begin(), s.end(), s.begin(), ::toupper);  // convert string to uppercase

void f(int n,vector<int> arr)
{
    ll low = 0;
    ll high = n - 1;
    ll mini = 1;
    ll maxi = n;
    while (low <= high)
    {
        if (low >= high)
            break;

        if (arr[low] == mini || arr[low] == maxi)
        {
            if (arr[low] == mini)
            {
                mini++;
            }
            else
                maxi--;
            low++;
        }
        else if (arr[high] == maxi || arr[high] == mini)
        {
            if (arr[high] == maxi)
            {
                maxi--;
            }
            else
                mini++;
            high--;
        }
        else
            break;
    }
    if (low >= high)
    {
        cout << -1 << endl;
        return;
    }
    else
        cout << low + 1 << " " << high + 1 << endl;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
void solve()
{
    /*int n,x,y;
    cin>>n;
    vector<int> v(n);
    for(auto &i: v)
    cin>>i;
    int i,j;
    for(i=0;i<n;++i)
    {
        if(v[i]==1)
        break;
    }
    for(j=0;j<n;++j)
    {
        if(v[j]==n)
        break;
    }
    //cout << i << " " << j << endl;
    int u=1,o=1;
    if(i>=j)
    cout<<-1<<endl;
    else
    {
        while(true)
        {
            x=*max_element(v.begin(),v.end());
            y=*min_element(v.begin(),v.end());
            if(v[v.size()-1]==x)
            {
            v.pop_back();
            o++;
            }
            if(v[v.size()-1]==y)
            {
            v.pop_back();
            o++;
            }
             x = *max_element(v.begin(), v.end());
            y = *min_element(v.begin(), v.end());
            if(v[0]==x)
            {
            v.erase(v.begin()+0);
            u++;
            }
            if (v[0] == y)
            {
            v.erase(v.begin() + 0);
            u++;
            }
            x = *max_element(v.begin(), v.end());
            y = *min_element(v.begin(), v.end());
            if(v[0]!=x && v[0]!=y && v[v.size()-1]!=x && v[v.size()-1]!=y)
            {
                cout<<u<<" "<<n-o+1<<endl;
                break;
            }
            if(v.size()<=1)
            {
                cout<<-1<<endl;
            break;
            }

        }

    }*/
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i: v)
    cin>>i;
    f(n,v);

    
    
    
}
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        solve();
    return 0;
}