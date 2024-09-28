#include<iostream>
using namespace std;
class lalit
{  public:
    int health,level;
  
    lalit(int a,int b)
    {
        health=a;
        level=b;
        

    }
    ~lalit()
    {
        cout<<"memory dealocated"<<endl;
            }
};
int main ()
{
    lalit ob1(10,20);
    lalit ob2(ob1);
   cout<<"ob1 health is "<<ob1.health<<endl<< "ob1 level is " << ob1.level<<endl;
   cout<<"ob2 health is "<<ob2.health<<endl<< "ob2 level is " << ob2.level<<endl;
return 0;
}