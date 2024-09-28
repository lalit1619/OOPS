#include<iostream>
using namespace std;
int main ()
{
    // int a=10;
    // a=15;
    // cout<<a; this is absolutely possible 

    // const int a=10;
    // a=15; this is not possible

    // it can be initailized both at compile time and run time

    const int j=23; //this is initialized at comPile time
    // const int j=get_size(); //this is initialized at run time


    // const int k;  //this throws an error because it is not initialized
    const int ci=j; 
      //this is also okayc
      cout<<ci;

    //   extern const int buffsize=fcn();

    //this is how we can access the const interger to  another file 


return 0;
}

//const objects are local to a file
//sometimes we have const variable that we want to share across multiple files but
//whone initializer is not a constant expression 
//to share a const object among multiple files, we must define the variable as extern
