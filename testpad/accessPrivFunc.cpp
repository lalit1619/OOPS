#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Demo
{
    int a,b;
    void test()
    {
        cin>>a>>b;
        cout<<"a="<<a<<" b="<<b;
    }
    friend void dostFunc(Demo);
};
void dostFunc(Demo x)
{
    x.test();
}
int main()
{
    Demo obj;
    dostFunc(obj);

return 0;
}