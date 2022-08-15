// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     ofstream newfile("D:\\C++\\File.txt");
//     cout<<"File created";
//     newfile<<"Hii there,congrate ! finally you write in the file";
//     newfile.close();
// }

// Read operation 

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    ifstream newfile("D:\\C++\\File.txt");
    while (getline(newfile,str))
    {
        cout<<str<<endl;
    }
    
    newfile.close();
}
