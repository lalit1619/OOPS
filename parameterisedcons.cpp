#include<iostream>
using namespace std;
class Timespan
{
    int min,hour;
    public:
        Timespan(int hour,int min)
    {
        logic(hour,min);
        cout<<"hour is "<<this->hour<<endl;
        cout<<"min is "<<this->min<<endl;

    }
    void setMin(int nin)
    {
this->min=nin;
    }
      void setHour(int hour)
    {
this->hour=hour;
    }


    private:
    void logic(int hour,int min)
    {
        if(min>60)
        {
            this->hour=hour+min/60;
            this->min=(min%60);
        }
        else
        {
            this->hour=hour;
            this->min=min;
        }
        
    }

};
int main ()
{
    Timespan ob1(10,140);
return 0;
}