#include<iostream>
using namespace std;
class ABC
{
    int a;
    public:
    ABC()
    {
        a=10;  
    }
    void display()
    {
cout<<a<<endl;
    }

    friend ABC operator+(ABC,ABC);
};
ABC operator+(ABC T1,ABC T2)
{
    ABC temp;
    temp.a=T1.a+T2.a;
    return  temp;
}
int main ()
{
    ABC ob1;
    ABC ob2(ob1);
ob1.display();
ob2.display();
    ABC ob3=ob1+ob2;
    ob3.display();

return 0;
}