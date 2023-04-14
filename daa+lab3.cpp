#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr;
    cout<<"\nenter the values: ";
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    cout<<"\nSmallest Number IN array: "<<arr[0];
    cout<<"\nLargest Number in array: "<<arr[arr.size()-1];
    return 0;
}