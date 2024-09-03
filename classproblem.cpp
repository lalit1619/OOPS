#include<iostream>
using namespace std;
class ABC
{
    public:
    ABC(ABC &OB1)
    {
        cout<<"this is a constructor";
    }
};
class DEF
{

};

int main ()
{
    DEF ob1;
    ABC ob2(ob1);
return 0;
}


