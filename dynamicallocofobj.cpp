#include<iostream>
using namespace std;
class hero
{
    int health,level;
    public:
    void setHealth(int health)
    {
this->health=health;
    }
    void setLevel(int level)
    {
        this->level=level;
    }
    int getHealth()
    {
        return health;
    }
    int getLevel()
    {
        return level;
    }

};
int main ()
{
 hero a1;
 hero *p=new hero;
 p->setHealth(10);
 p->setLevel(90);
 cout<<"the health remaining is "<< p->getHealth()<<endl;
 cout<<"the level is "<< p->getLevel()<<endl;

return 0;
}