#include<iostream>
using namespace std;
class lalit
{
    int a,b;
    public:
    //this is a constructor

    lalit()
    {
        cout <<"this is a constructor invoked"<<endl;

    }
    //this is a destructor
    ~lalit()
    {
        cout<<"this is a destructor invoked"<<endl;
    }

};
int main ()
{
    lalit o1;
return 0;
}