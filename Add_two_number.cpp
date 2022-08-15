#include<iostream>
using namespace std;
class A
{
    int a,b,c;
    public:
    void fun()
    {
        a=12;
        b=20;
        c=a+b;
        cout<<c;
    }
};
int main()
{
    A obj;
    obj.fun();
}