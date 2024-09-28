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

    
};
int main()
{
    abc lalit;
    lalit.sethealth(10);
    lalit.setlevel('a');
    cout<<"health of lalit is "<<lalit.gethealth()<<endl;
    cout<<"level of lalit is "<<lalit.getlevel()<<endl;


    return 0;

}