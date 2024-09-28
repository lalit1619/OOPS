#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Def; //forward declaration this is done because in class Abc Def is not
//declared so this is like the protype this is declaration and the necessary 
//things is done in definition 
class Abc
{
    private: int a;
    friend void dostFunc(Abc,Def);

};
class Def
{
    private: int b;
    friend void dostFunc(Abc,Def);

};
void dostFunc(Abc t1,Def t2)
{
    t1.a=10;
    t2.b=20;
    cout<<t1.a+t2.b<<endl;
}

int main()
{
    Abc obj1;
    Def obj2;
    dostFunc(obj1,obj2);
return 0;
}