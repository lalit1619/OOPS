 //afaaai pani banxa and we can also allocate by ourself
//static allocation ko lagi destructor affai call hunxa
//dinamically allocate gareko affai call hunna
//for dinamic allocation we need to manually call destructor

#include<iostream>
using namespace std;
class Dest
{
    int a,b;
    public:
    Dest()
    {
        cout<<"Hello this is a constructor"<<endl;
    }
    ~Dest()
    {
        cout<<"Hello this is a destructor"<<endl;

    }
    
};
int main ()
{
    {
Dest ob1;
    }
    
    Dest *b=new Dest();
    delete b;
return 0;
}