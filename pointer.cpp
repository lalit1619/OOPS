#include<iostream>
using namespace std;
int main ()
{
    int *a;

    int c=10;
    a=&c;
        int *b=a;
 
    cout<<&c<<endl<<a<<endl<<b;

return 0;
}