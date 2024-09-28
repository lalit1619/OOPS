#include<iostream>
#include<sstream>
using namespace std;
int main ()
{
    string str= "My name is Lalit";
    stringstream ss(str);
    string st1;
    while(ss>>st1)
    {
cout<<st1<<endl;
    }
return 0;
}