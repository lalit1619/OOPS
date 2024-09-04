#include<iostream>
using namespace std;
class Human
{
    public:
    string name;
    int level;
    int health;
    
};

class Male: protected Human
{
    public:
    string gender;

    void setGender()
    {
        gender="male";
    }
    string getName()
    {
        return name;
    }
    int getLevel()
    {
        return level;
    }
    int getHealth()
    {
        return health;
    }
    string getGender()
    {
        return gender;
    }

    void setName()
    {
        cout<<"please enter your name";
        cin>>name;
    }

    void setLevel()
    {
        cout<<"Please enter your level";
        cin>>level;
    }
    
    void setHealth()
    {
        cout<<"Please enter your health";
        cin>>health;
    }
};
int main ()
{
    Male ob1;
    ob1.setName();
    ob1.setLevel();
    ob1.setHealth();
    ob1.setGender();
     cout<<"Your name is "<<ob1.getName()<<endl;
     cout<<"Your lelvel is "<<ob1.getLevel()<<endl;

     cout<<"Your health is "<<ob1.getHealth()<<endl;
     cout<<"You are " <<ob1.getGender()<<endl;


return 0;
}