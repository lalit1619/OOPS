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
        cout<<a;
    }
friend void operator --(ABC);

};
    void operator --(ABC T1)
    {
        T1.a=T1.a-1;
    }
int main ()
{
    ABC ob;
    --ob;
    ob.display();
return 0;
}