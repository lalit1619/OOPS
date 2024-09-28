#include<iostream>
using namespace std;
class Operatorr
{
    int a;
    int b;
    public:
    void setData(int,int);
    void operator--();
    void display();

};
void Operatorr::setData(int a,int b)
{
    this->a=a;
    this->b=b;
}

void Operatorr::operator--()
{
    a=a-1;
    b=b-1;
}
void Operatorr::display()
{
    cout<<a<<endl;
    cout<<b<<endl;
}

int main ()
{
    Operatorr obj1;
    obj1.setData(5,6);
    --obj1;
    obj1.display();



    
    
return 0;
}