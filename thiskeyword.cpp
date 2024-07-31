#include<iostream>
using namespace std;

class abc{
    int health;
    char level;
    public:
    void sethealth(int h)
    {
        health=h;
    }
    int gethealth()
    {
        return health;
    }
    void setlevel(char l)
    {
        level=l;
    }
    char getlevel()
    {
        return level;
    }
    abc()
    {
        cout<<"address of this operator "<<this<<endl; 
    }
   

    
};
int main()
{
   abc h1;
   cout<<"adress of object h1 "<<&h1<<endl;
   
    return 0;

}