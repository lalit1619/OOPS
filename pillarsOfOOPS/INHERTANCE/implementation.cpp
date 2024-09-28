#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;

    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight=w;
    }
};

class Male :public Human
{
    public:
    string colour;
    void sleep()
    {
        cout<<"Male sleepint"<<endl;
    }
    void setColor(string color)
    {
        this->colour=color;
    }
};
int main ()
{
    Male object;
    cout<<object.age<<endl;
    cout<<object.weight<<endl;
    object.setColor("red");
    cout<<object.colour<<endl;
return 0;
}