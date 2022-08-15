#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if (n%4==0 || n%400==0)
    {
        cout<<"This year is a leap year";
    }
    else if(n%100==0)
    {
        cout<<"This is not a leap year";
    }
    else
    {
        cout<<"This is not a leap year";
    }
    
    
    
}