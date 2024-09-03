#include<iostream>
using namespace std;
int top=0;


class Abc
{
    int *stack[5];
    
    public:
    void push(int ele)
    {
        if(isFull())
        {
cout<<"STACK IS FULL";
        }
        else
        {
            *stack[top++]=ele;
            cout<<ele<<" is pushed"<<endl;

        }

    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"STACK IS EMPTY";
        }
        else
        {
            if(top==5)
            {
                top--;
            }
            
            int store;
            store=*stack[top--];
            cout<<store<<" is poped out"<<endl;
        }

    }

    
    int isFull()
    {
        if(top==5)
        {
            return 1;
        }
        return 0;
    }
    int isEmpty()
    {
        if(top==-1)
        {
            return 1;
        }
        
        return 0;
    }

    Abc()
    {

    }

    Abc(Abc &ob1)
    {
        int stack2=new int[5];
        for(int i=0,j=4;i<5;i++,j--)
        {
            stack2[i]=*stack[j];
        }
    }

};
int main ()
{

Abc ob1;
ob1.push(10);
ob1.push(20);
ob1.push(30);
ob1.push(40);
ob1.push(50);
ob1.pop();
ob1.pop();
ob1.pop();
ob1.pop();
ob1.pop();
ob1.pop();

    

return 0;
}