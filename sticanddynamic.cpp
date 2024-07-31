#include<iostream>
using namespace std;
class lalit{
    public:
    int a=10;
    char b='a';
};
int main ()
{
    // static allocation
    lalit abc;
    // dynamic allocation
    lalit * l=new lalit;  //pointer approach
    cout<<l->a<<endl;
    cout<<(*l).a<<endl;

     cout<<l->b;

return 0;
}