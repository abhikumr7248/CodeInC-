#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    char y;
    cin>>x>>y;
    if ((x == 'R' && y == 'B') || (x == 'B' && y == 'R') || (x == 'R' && y == 'G') || (x == 'G' && y == 'R') || (x == 'R' && y == 'R'))
    cout << "R" << endl;
    else if ((x == 'B' && y == 'G') || (x == 'G' && y == 'B') || (x == 'B' && y == 'B'))
    cout << "B" << endl;
    else
    cout<<"G"<<endl;
    return 0;
}