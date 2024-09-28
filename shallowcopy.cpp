#include<iostream>
using namespace std;
class lalit
{
    int c;
    int *p=(int *)malloc(sizeof(int));
    public:
    lalit()
    {
        cin>>c>>*p;
    }
    void set(int a,int b)
    {
        c=a;
        *p=b;
    }
int sum(lalit obd)
{
    c=obd.c;
    p=obd.p;
}
void display()
{
    cout<<c<<" "<<*p<<endl;
}
};
int main ()
{
    lalit ob1;
    ob1.display();
    lalit ob2(ob1);
    ob2.display();
  
  

  
    ob1.display();
    ob2.display();

return 0;
}