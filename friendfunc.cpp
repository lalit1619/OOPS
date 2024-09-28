#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    void getdata();
    friend int getsum(demo);
};
void demo::getdata()
{
    cout<<"enter two number";
    cin>>a>>b;
}
int getsum(demo aa)
{
    return aa.a+aa.b;
}
int main ()
{
    demo ob1;
    ob1.getdata();
    int result= getsum(ob1);
    cout<<"the sum is "<<result;
return 0;
}