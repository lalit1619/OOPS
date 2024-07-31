#include<iostream>
using namespace std;
class lalit
{
    public:
    static int a;
};
int lalit :: a=10;
int main ()
{
    lalit ob1;
    cout<<ob1.a;


return 0;
}