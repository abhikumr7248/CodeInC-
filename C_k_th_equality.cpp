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
int a,b,c;
ll k;
public:
    void input()
    {
        cin>>a>>b>>c;
        cin>>k;
    }
    void solve(vector<int> pw)
    {
    ll sum = 0;
    int ansa, ansb, ansc;
    bool flag = 0;
    for (int i = pw[a]; i < pw[a + 1]; ++i)
    {
    int mx = pw[c + 1] - 1;
    int mi=pw[c];
    
    mi -= i;
    mx -=i;
    mx = min(mx, pw[b + 1] - 1);
    mi = max(mi, pw[b]);
    int len = mx - mi + 1;
    if (mx<mi) 
    continue; 
    
    if (sum < k && sum + len >= k)
    {
        flag = 1;
        ansa = i;
        ansb = mi + (k - sum) - 1;
        ansc=ansa + ansb;
    }
    sum += len;
    }
    if (flag!=0)
    cout<<ansa<<" + "<<ansb<<" = "<<ansc<<endl;
    else
    cout<<-1<<endl;
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
    vector<int> pw(10);
    pw[1] = 1;
    for (int i = 2; i <= 7; ++i)
    pw[i] = pw[i - 1] * 10;
    for (int i = 0; i < n; ++i)
    {
        S[i].input();
        S[i].solve(pw);
    }
    // Solution S;
    // S.input();
    // S.solve();
    return 0;
}