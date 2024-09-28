#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Demo
{
    int a,b,c;
    friend int dostFunc(Demo&);
    public:
    void display()
    {
        cout<<a<<endl<<b<<endl<<c;
    }
};
int dostFunc(Demo& x) //class object
//if we give ampersand then it is the same obj and changes are visible 
//otherwise it gives garbage values
{
    x.a=2;
    x.b=3;
    x.c=x.a+x.b;
    return x.c;
}

int main()
{
Demo obj1;
cout<<dostFunc(obj1)<<endl;
obj1.display();
return 0;
}

