#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cu=0,cl=0;
    for(int i=0;i<s.length();++i)
    {
        if(islower(s[i]))
        cl++;
        else
        cu++;
    }
    if(cu>cl)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s;
}