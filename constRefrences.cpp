//As with any other object, we can bind a refrence to an object of a const type
//refrence to any other object is changed if we change the refrencing value but in case of refrence to const it is not changed
#include<iostream>
using namespace std;
int main ()
{
    const int ci=1024;
    const int &r1=ci;

    // r1=42; //this throws an error
    // also we are not able to bind a const obj to a non const refrence
     
return 0;
}