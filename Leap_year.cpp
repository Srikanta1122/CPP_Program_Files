#include<iostream>
using namespace std;
class A{
    int year;
    public:
    void fun()
    {
        cout<<"Enter the year:";
        cin>>year;
        if (year%4==0 || year%400==0)
        {
            cout<<"This is leap year";
        }
        else if (year%100==0)
        {
            cout<<"This is not leap year";
        }
        else
        {
            cout<<"This is not leap year";
        }    
    }
};
int main()
{
    A obj;
    obj.fun();
}