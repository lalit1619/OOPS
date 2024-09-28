#include<iostream>
using namespace std;
class Student{
    string name;
    int age;
    int height;


    public:
    int getAge()
    {
        return this->age;
    }
    int setAge(int a)
    {
        this->age=a;
    }
};
int main ()
{
    Student first;
    first.setAge(19);
    cout<<"Your age is "<<
    first.getAge();
return 0;
}