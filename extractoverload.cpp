// Online C++ compiler to run C++ program online

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class abc{
    int a;
    public:
    abc(){
        a=10;
    }
    void operator++(int){
        this->a+=1;
   
    }    
    void display(){
        cout<<a<<endl;
    }
    abc operator-(abc const&t1){
        abc t3;
        t3.a=this->a-t1.a;
        return t3;
    }
    void operator()(){
        a+=5;
    }
     abc operator <<(abc &t1){
         abc t4;
        t4.a=this->a+t1.a;
        return t4;
    }
    friend abc operator+(abc const&t1, abc const&t2);
  
};
abc operator+(abc const&t1,abc const&t2){
    abc t3;
    t3.a=t1.a+t2.a;
    return t3;
}


int main() {
    abc o1;
o1++;
cout<<"value of o1.a=>";
o1.display();
abc o2;
cout<<"value of o2.a=>";
o2.display();
abc o3=o1+o2;
cout<<"sumOf:o3=o1+o2=>";
o3.display();
abc o4=o1-o2;
cout<<"diffOf:o4=o1-o2=>";
o4.display();
abc o5=o1+o2+o3;
cout<<"diffOf:o5=o1+o2+o3=>";
o5.display();
o1();
o1.display();
abc o6=o1<<o2;
o6.display();



    return 0;
}