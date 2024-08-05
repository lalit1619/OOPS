#include<iostream>
#include<string.h>
using namespace std;
class Hero
{
    int level;
    char health;
    char *name;
    public:
    void setLevel(int level)
    {
        this->level=level;
    }
    void setHealth(char health)
    {
this->health=health;
    }
    void setName(char name[])
    {
        strcpy(this->name,name);
    }
    int getLevel()
    {
        return level;
    }
    char getHealth()
    {
        return health;
    }
    char getName()
    {
        return *name;
    }
    //default constructor
    Hero ()
    {
        cout<<"default constructor invoked"<<endl;
    }

    //copy constructor

    Hero(Hero& copy)
    {
        this->level=copy.level;
        this->health=copy.health;
    }
};
int main ()
{
    Hero lalit;
    lalit.setHealth('A');
    lalit.setLevel(10);
    lalit.setName("LALIT");
    Hero shyam(lalit);
    shyam.setHealth('C');
    shyam.setName("SHYAM");
    cout<<lalit.getHealth()<<endl;
     cout<<shyam.getHealth()<<endl;
     cout<<lalit.getLevel()<<endl;


return 0;
}