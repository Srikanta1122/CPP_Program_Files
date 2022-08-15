#include<iostream>
using namespace std;
class A
{
    int n;
    public:
    void fun()
    {
        cout<<"Enter the number:";
        cin>>n;
        for (int i = 1; i <= 10; i++)
        {
            cout<<"\n"<<n<<"*"<<i<<"="<<n*i;
        }
        
    }
};
int main()
{
    A obj;
    obj.fun();
}