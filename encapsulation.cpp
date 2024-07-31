#include<iostream>
using namespace std;
class lalit{
    int arr[10];
    public:
    void setvalue()
    {
        cout<<"enter the numbers";
        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
            
        }

    }
    void getValue()
    {
         cout<<"Here are the numbers"<<endl;
        for(int i=0;i<10;i++)
        {
            cout<<arr[i]<<endl;
            
        }
    }
};
int main ()
{
    lalit a1;
    a1.setvalue();
    a1.getValue();

return 0;
}