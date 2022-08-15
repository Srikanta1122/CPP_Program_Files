// Methode overloading

/*#include<iostream>
using namespace std;
class Calculator
{
    int a,b,c;
    public:
    void add()
    {
        cout<<"Enter two number:";
        cin>>a>>b;
        c=a+b;
        cout<<"Addition="<<c;
    }
    public:
    void add(int x)
    {
        cout<<"\nThe number is:"<<x;
    }
};
int main()
{
    Calculator obj;
    obj.add();
    obj.add(100);
}*/

// Methode overriding

#include<iostream>
using namespace std;
class Calculator
{
    public:
    int a,b,c;
    public:
    void function()
    {
        cout<<"\nEnter two number:";
        cin>>a>>b;
        c=a+b;
        cout<<"Addition="<<c;
    }
};
class Calculator_1:public Calculator
{
    public:
    void function()
    {   cout<<"Enter two number:";
        cin>>a>>b;
        c=a-b;
        cout<<"Subtraction="<<c;
    }
};
int main()
{
    Calculator_1 obj;
    obj.function();

    Calculator obj1;
    obj1.function();
}
