#include<iostream>
using namespace std;
class A{
    int n;
    public:
    void fun()
    {
        cout<<"Enter the number:";
        cin>>n;
        if (n%2==0)
        {
            cout<<"The number is even";
        }
        else
        {
            cout<<"The number is odd";
        }    
    }
};
int main()
{
    A obj;
    obj.fun();
}