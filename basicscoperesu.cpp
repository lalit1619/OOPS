#include<iostream>
using namespace std;
int a=100;
int main ()

{
    int a=10;
    cout<<"this is local a "<<a<<endl;
    cout<<"this is a global a "<<::a<<endl;

return 0;
}