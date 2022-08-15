#include<iostream>
using namespace std;
class Student
{
    public:
    int rollno,mark;
    string name;
    virtual void ditals()=0;
    public:
    void mark_1()
    {
        cout<<"\nThis is mark_1 methode";
    }
};
class info:public Student 
{
    public:
    void ditals()
    {
        rollno=2;
        mark=85;
        name="John";
        cout<<"Name:"<<name<<endl<<"rollno:"<<rollno<<endl<<"mark:"<<mark;
    }
};
int main()
{
    info obj;
    obj.ditals();
    obj.mark_1();
}
