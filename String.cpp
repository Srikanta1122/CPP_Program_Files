#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[]="Srikanta";
    char str2[10];
    // cout<<str<<endl;
    // strrev(str);
    // int i=strlen(str);

    // strcat(str1,str2);
    strcpy(str2,str1); // copy from str1 to str2
    cout<<str2;
}