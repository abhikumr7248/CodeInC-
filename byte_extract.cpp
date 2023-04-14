#include<bits/stdc++.h>
using namespace std;
int power(int x, int y)
{
int res = 1;

while (y > 0) {
    if(y%2==1)
    res=res*x;
    y = y >> 1;
x = (x * x);
}
return res;
}
int main() {
int n;
cout<<"hello"<<endl;
cin>>n;
vector<int> v;
int ans=0;
for(int i=0;i<32; i++) {
if(i%8== 0 && i!=0)
{
    v.push_back(ans);
    ans=0;
}
if((n>>i) &1) {
ans+=(power(2, (i%8)));

}
}
v.push_back(ans);
for(auto it: v){
cout<<it<<"\n";
}
}