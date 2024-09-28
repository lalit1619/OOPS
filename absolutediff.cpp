#include<iostream>

using namespace std;
int main()
{
    int sumodd=0;
    int sumeven=0;
    int upper=10;
    int absdiff;
    int lower=0;
    while (lower<=upper)
    {
if(lower%2==0)
{
    sumeven+=lower;
}
else
{
    sumodd+=lower;
}
lower++;
    }
    if(sumeven>sumodd)
    {
        absdiff=sumeven-sumodd;
    }
    else
    {
        absdiff=sumodd-sumeven;
    }


    cout << "the sum of odd no is " << sumodd <<endl;
    cout << "the sum of even no is " << sumeven<<endl;
    cout << "The absolute difference is " << absdiff <<endl;
    return 0;

}
