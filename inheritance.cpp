//Multilevel inheritance

/*
#include<iostream>
using namespace std;
class Calculator
{
    public:
    int a,b,c;
    public:
    void add()
    {
        cout<<"Enter two number:";
        cin>>a>>b;
        c=a+b;
        cout<<"Addition="<<c;
    }
};
class Calculator_1 : public Calculator
{
    public:
    void sub()
    {
        c=a-b;
        cout<<"\nSubtraction="<<c;
    }
};
class Calculator_2 : public Calculator_1
{
    public:
    void mul()
    {
        c=a*b;
        cout<<"\nMultiplecation="<<c;
    }
    public:
    void div()
    {
        c=a/b;
        cout<<"\nDivition="<<c;
    }
};
int main()
{
    Calculator_2 obj;
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
}  */


//Hirercical inheritance

#include<iostream>
using namespace std;
class Calculator
{
    public:
    int a,b,c;
    public:
    void add()
    {
        cout<<"\nEnter two number:";
        cin>>a>>b;
        c=a+b;
        cout<<"Addition="<<c;
    }
};
class Calculator_2 : public Calculator
{
    public:
    void sub()
    {
        c=a-b;
        cout<<"\nSubtraction="<<c;
    }
};
class Calculator_3 : public Calculator
{
    public:
    void mul()
    {
        c=a*b;
        cout<<"\nMultiplecation="<<c;
    }
    public:
    void div()
    {
        c=a/b;
        cout<<"\nDivition="<<c;
    }
};
int main()
{
    Calculator_3 obj;
    obj.add();
    obj.mul();
    obj.div();
    Calculator_2 obj1;
    obj1.add();
    obj1.sub();
}
