#include<iostream>
using namespace std;
class A
{
    int a,b,temp;
    public:
    void fun()
    {
        cout<<"Enter Two number:";
        cin>>a>>b;
        cout<<"\nAfter swapping the value of a and b is..."<<a<<" "<<b;
        temp=a;
        a=b;
        b=temp;
        cout<<"\nBefore swapping the value of a and b is..."<<a<<" "<<b;
    }
};
int main()
{
    A obj;
    obj.fun();
}