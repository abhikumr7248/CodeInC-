#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <algorithm>
#include <algorithm>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll signed long long
#define ld long double
#define to_low(s) transform(s.begin(), s.end(), s.begin(), ::tolower); // convert string to lowercase
#define to_up(s) transform(s.begin(), s.end(), s.begin(), ::toupper);  // convert string to uppercase
/*------------------------------------------------------------------------------------------------------------------------------*/
class Solution
{
private:
//1
void sw(int& aa, int& bb)
{
    aa^= bb^= aa^=bb;
}
//2
void ul(char& aa)
{
    aa=aa^32;
}
//3
bool eq(int aa, int bb)
{
    if(!(aa^bb))
    return true;
    else
    return false;
}
//4
int max3(int aa,int bb,int cc)
{
    int maxi=aa;
    (maxi<bb) && (maxi=bb);
    (maxi<cc) && (maxi=cc);
    return maxi;
}
//5
int min3(int aa, int bb, int cc)
{
    int mini = aa;
    (mini > bb) && (mini = bb);
    (mini > cc) && (mini = cc);
    return mini;
}
//6
int isPowerOf2(int aa)
{
    return (aa && !(aa & (aa-1)));
}
public:
    // vector<int> nextSmallerElement(vector<int> &arr)
    // {
    // stack<int> st;
    // st.push(-1);
    // int m = arr.size();
    // vector<int> ans(m);

    // for (int i = m - 1; i >= 0; i--)
    // {
    // int curr = arr[i];
    // while (st.top() != -1 && arr[st.top()] >= curr)
    // {
    //     st.pop();
    // }
    // // ans is store ka top
    // ans[i] = st.top();
    // st.push(i);
    // }
    // return ans;
    // }
    // vector<int> prevsmallerElement(vector<int> &arr)
    // {
    // stack<int> st;
    // st.push(-1);
    // int m = arr.size();
    // vector<int> ans(m);

    // for (int i = 0; i < m; i++)
    // {
    // int curr = arr[i];
    // while (st.top() != -1 && arr[st.top()] >= curr)
    // {
    //     st.pop();
    // }
    // // ans is store ka top
    // ans[i] = st.top();
    // st.push(i);
    // }
    // return ans;
    // }
    // int getMaxArea(vector<int> &arr)
    // {
    // int m = arr.size();
    // vector<int> next(m);
    // next = nextSmallerElement(arr);

    // vector<int> prev(m);
    // prev = prevsmallerElement(arr);

    // int area = INT_MIN;

    // for (int i = 0; i < m; i++)
    // {
    // int l = arr[i];

    // if (next[i] == -1)
    // {
    //     next[i] = m;
    // }
    // int b = next[i] - prev[i] - 1;
    // int newArea = l * b;
    // area = max(area, newArea);
    // }
    // return area;
    // }
    // int maxArea(vector<vector<int>> M, int n, int m)
    // {
    // // Your code here
    // vector<int> arr(m, 0);
    // int maxi = 0;
    // for (int i = 0; i < n; i++)
    // {
    // for (int j = 0; j < m; j++)
    // {
    //     if (M[i][j] == 1)
    //         arr[j]++;
    //     else
    //         arr[j] = 0;
    // }
    // maxi = max(maxi, getMaxArea(arr));
    // }
    // return maxi;
    // }
    string s;
    void input()
    {
        cin>>s;
    }
    void solve()
    {
    //     if (s.size() == 1)
    //     {
    // if (s[0] == '1')
    //     cout << 1 << endl;
    // else
    //     cout << 0 << endl;
    // return;
    //     }
    //     if (s.size() > 1)
    // s = s + s;
    //     int len = 0;
    //     for (int i = 0; i < s.size(); i++)
    //     {
    // if (s[i] == '1')
    // {
    //     int j = i;
    //     while (s[j] == '1')
    //     {
    //         j++;
    //     }
    //     len = max(len, j - i);
    //     i = j;
    // }
    //     }
    //     if (len == 1)
    //     {
    // cout << 1 << endl;
    //     }
    //     else
    // cout << 2 * (len - 1) << endl;

        ll n=s.size();
        ll cnt1=0;
        for(ll i=0;i<n;++i)
        {
            if(s[i]=='1')
            cnt1++;
        }
        if(cnt1==s.size())
        cout<<n*n<<endl;
        else
        {
            ll cnt2=0,p=0,i=0,cnt3=0;
            while(true)
            {
                if(s[i%n]=='1')
                cnt3++;
                else{
                    cnt2=max(cnt2,cnt3);
                    cnt3=0;
                }
                cnt2=max(cnt2,cnt3);
                i++;
                p++;
                if(p>=n && s[i%n]=='0')
                break;
            }
            ll ans=((cnt2+1)*(cnt2+1))/4;
            cout<<ans<<endl;
        }

        // vector<vector<int>> v;
        // for(int i=0;i<s.size();++i)
        // {
        //     vector<int> temp;
        //     for(int j=0;j<s.size();++j)
        //     {
        //         temp.push_back(s[j]-'0');
        //     }
        //     v.push_back(temp);
        //     char d=s.back();
        //     s.pop_back();
        //     reverse(s.begin(),s.end());
        //     s.push_back(d);
        //     reverse(s.begin(),s.end());
        // }
        // cout<<maxArea(v,s.size(),s.size())<<endl;
    }
};
/*------------------------------------------------------------------------------------------------------------------------------*/
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    Solution S[n];
    for (int i = 0; i < n; ++i)
    {
        S[i].input();
        S[i].solve();
    }
    // Solution S;
    // S.input();
    // S.solve();
    return 0;
}