#include<iostream>
using namespace std;
class Abc
{
    int a;
    public:
    int b;
    void setA(int a)
    {
        this->a=a;
    }
    int getA()
    {
       return a;

    }


};
class def : public Abc
{
    int b;
    int c;
    public:
    void setB(int b)
    {
        this->b=b;
    }
    void setC(int c)
    {
        this->c=c;
    }
    int getB()
    {
        return b;
    }
    int getC()
    {
        return c;
    }
   
};
int main ()
{
    int f;
    def d;
    d.setA(10);
   cout<<"the value of A is "<<d.getA()<<endl;
   d.setB(20);
   d.setC(30);
cout<<"the value of B is "<<d.getB()<<endl;
  cout<<"the value of C is "<<d.getC()<<endl;
return 0;
}