#include <iostream>
using namespace std;
void function()   // function defination
{
    int n;
    cout<<"Enter the number(Function):";
    cin>>n;
    n++;
    cout<<n;
}
int main()  // Program excution alaways start from the main function 
{
    function();  // function call
    int n; 
    cout<<"\nEnter the number:";
    cin>>n;
    if(n%2==0)
    {
        cout<<"Even number";
    }
    else
    {
        cout<<"Odd number";
    }
    
}
