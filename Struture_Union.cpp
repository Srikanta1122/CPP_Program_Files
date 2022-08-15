#include<iostream>
using namespace std;
union str1
{
    char name[20];
    int rollno;
    double marks;
};
union str2
{
    int a;
    float b;
    double c;
};

int main()
{
    union str1 s1;
    cout<<"Enter students name:";
    cin>>s1.name;
    cout<<s1.name<<endl;
    cout<<"Enter students rollno:";
    cin>>s1.rollno;
    cout<<s1.rollno<<endl;
    cout<<"Enter students marks:";
    cin>>s1.marks;
    cout<<s1.marks<<endl;
    // cout<<"Name="<<s1.name<<ends<<"rollno="<<s1.rollno<<ends<<"marks="<<s1.marks<<ends;
    union str2 s2;
    cout<<"\nUnion ="<<sizeof(s1);
    cout<<"\nUnion size ="<<sizeof(s2);
 }
