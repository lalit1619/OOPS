//object creation is not needed
//no this keyword
//static function can only access static members




#include<iostream>
using namespace std;
class Abc
{
    int health,level;
    public:
    static int yourTime;
    static int random()
    {
        cout<<yourTime;
    }
};
int Abc::yourTime=10;
int main ()
{
    Abc::random();

return 0;

}