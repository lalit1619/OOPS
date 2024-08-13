#include<iostream>
using namespace std;
class A
{
    public:
    int a,b,c,d,e,f;
};
class B: virtual public A{
    //
};
class C:public virtual A
{

};
class D:public B, public C
{
//
};
int main ()
{
    cout<<sizeof(D);
return 0;
}