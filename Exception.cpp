#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two number:";
    cin>>a>>b;
    try
    {
        if (b==0)
        {
            throw b;
        }
        
        int c=a/b;
        cout<<"Result is:"<<c;
    }
    
    catch(int x)
    {
        cout<<"Can't devided by zero "<<x;
    }
    
}   