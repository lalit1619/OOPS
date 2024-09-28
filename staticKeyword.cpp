//static member must be initialized first
//and it must be initialized outside the class

//int Hero:: timeToComplete=5;
//it doesnt belong to object and it can be accessed without object

#include<iostream>
using namespace std;
class staticCheck
{
    int a,b;
    public:
    static int c;

};
int staticCheck::c=10;
int main ()
{

staticCheck a;
// staticCheck b;
// b.c=25;         this is not a good practice it is not required 
// cout<<a.c;
cout<<staticCheck::c;
return 0;
}
