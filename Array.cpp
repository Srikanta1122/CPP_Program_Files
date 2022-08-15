#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the array elements:";
    int arr[2][3],i,j;
    for (int i = 0; i <=1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }    
    }
    cout<<"\nThe array elements is:\n";
    for (int i = 0; i <=1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<ends;
        }    
           cout<<endl;
    }
}