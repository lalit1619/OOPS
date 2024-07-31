#include<iostream>
using namespace std;
class lalit
{
    int b;
    public:
    void setValue(int val1,int val2)
    {
        
        ob1.b=val2;
    }
    void getValue()
    {
        cout<<"the value of a and b is"<<ob1.a<<ob1.b;
    }
    

};
int main ()

{
    lalit ob1;
   ob1.setValue(10,20);
   ob1.getValue();
    return 0;
}