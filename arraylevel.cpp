#include<iostream>
using namespace std;
int main ()
{
    int arr[6]={1,6,8,2,4,3};
    int key=5;
    int score=0;
    for(int i=0;i<6;i++)
    {
        if(arr[i]<key)
        {
            score+=key-arr[i];
        }
        else if(arr[i]>key)
        {
            score=score-(arr[i]-key);
        }

    }
    cout<<"your score is "<<score;
return 0;
}