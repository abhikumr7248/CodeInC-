#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin>>w;
    for(int r=0;r<w;++r)
    {
        string s;
        cin >> s;
        int p;
        cin >> p;
        string w(s);
        sort(w.rbegin(), w.rend());
        int cost = 0;
        for(int i=0;i<s.length();++i)
            cost += s[i] - 'a' + 1;
        map<char, int> del;
        for(int i=0;i<w.length();++i)
        {
            if (cost > p)
            {
                del[w[i]]++;
                cost-= w[i] - 'a' + 1;
            }
        }
        
        for(int i=0;i<s.length();++i)
        {
            if (del[s[i]] > 0)
            {
                del[s[i]]--;
                continue;
            }
            cout << s[i];
        }
        cout << endl;
    }
}