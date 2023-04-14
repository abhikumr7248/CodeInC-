#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct student
{
    char name[20];
    int roll;
    float marks[50];
};
void enter_data(student s,int n)
{
    cout<<"enter the name,roll no. and marks of 5 subjects of a student:";
    cin>>s.name;
    cin>>s.roll;
    for(int i=0;i<n;++i)
    {
    cin>>s.marks[i];
    }
}
void show_data(student s,int n)
{
    cout<<"\n name: "<<s.name;
    cout<<"\n roll no.: "<<s.roll;
    cout<<"\n marks in 5 subjects of a student";
    for(int i=0;i<n;++i)
    {
        cout<<"\t"<<s.marks;
    }
}
int main()
{
    student data;
    enter_data(data,5);
    show_data(data,5);
    return 0;
}