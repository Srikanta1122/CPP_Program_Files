#include<iostream>
using namespace std;
class Student
{
    private :
    int students_id;
    public:
    void set(int stu_id)
    {
        students_id=stu_id;
    }
    int get()
    {
        return students_id;
    }
};
int main()
{
    Student obj;
    obj.set(100);
    cout<<"students_id is="<<obj.get();
}
