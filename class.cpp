#include<iostream>
#include "hero.cpp"
using namespace std;
class hero
{
    public:
    char name[100]; //properties
    int health;
    char level;
    
};


int main()
{
    hero h1;
    
    h1.health=100;
    cout << "health is  "<<h1.health<<endl;
    cout << "health is  "<<h1.level<<endl;
    return 0;
}