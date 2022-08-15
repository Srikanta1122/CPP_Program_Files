#include<iostream>
using namespace std;
class Student
{
    public:
    Student(int a,int b)
    {
        cout<<"Hii...I am constructor"<<endl;
        int c=a+b;
        cout<<"Result="<<c;
    }
    int rollno;
    string name;
    float mark;
    public:
    void show()
    {
        cout<<"\nEnter the student name:";
        cin>>name;
        cout<<"Name="<<name<<endl;
        cout<<"Enter the student rollno:";
        cin>>rollno;
        cout<<"rollno="<<rollno<<endl;
        cout<<"Enter the student mark:";
        cin>>mark;
        cout<<"mark="<<mark<<endl;
    }
};
int main()
{
    Student obj(10,20);
    obj.show();
}
