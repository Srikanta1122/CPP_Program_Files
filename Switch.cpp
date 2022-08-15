#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    switch (n)
    {
        case 1: cout<<"Sunday";
        break;
        case 2: cout<<"Monday";
        break;
        case 3: cout<<"Tuedsay";
        break;
        case 4: cout<<"Wesnesday";
        break;
        case 5: cout<<"Thursday";
        break;
        case 6: cout<<"Friday";
        break;
        case 7: cout<<"Saturday";
        break;
    default:
        cout<<"Invalid number";
    }
}
