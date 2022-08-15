#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    while (n<=10)
    {
        cout<<n <<endl;
        n++;
    }
    if (n<11)
    {
        cout<<"Invalid number";
    }
}