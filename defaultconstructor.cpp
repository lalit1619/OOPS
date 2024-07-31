#include<iostream>
using namespace std;
class Lalit
{
    int a;
    int b;
    public:
    Lalit()
    {
        cout<<"hello I am constructor"<<endl;
    }
};

int main ()
{
    Lalit h1;
    Lalit *l=new Lalit();
return 0;
}