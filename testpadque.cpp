/*Inheritance : Actors star_border
Design a class Person and two sub classes Actor and Actress. Every Actor will have a name, color, number_of_eyes & debut_year associated with him/her.

Supply each with a constructor that sets the Person data ﬁelds as described with given values, and a method named toString() that returns a string that contains a complete description of the Actor.

The constructor should be in the following format

Actor(name,color,number_of_eyes,debut_year)
And the same for class Actress.

Sample input

Amitabh
BROWN
2
1965
Hema
White
2
1975
Sample output

The person Amitabh is an Actor. He is BROWN in color, has 2 eyes and debut in 1965
The person Hema is an Actress. She is White in color, has 2 eyes and debut in 1975
*/
#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

#include<string.h>
class Person
{
  public:
 string name;
  string color;
  int number_of_eyes;
  int debut_year;
};
class Actor : public Person
{
public:
Actor(string n,string c,int e,int l)
{
 this->name=n;
 this->color=c;
this->number_of_eyes=e;
 this->debut_year=l;
}
 string toString()
{
string str="The person "+name+" is an Actor. He is "+color+" in color, has "+to_string(number_of_eyes)+" eyes and debut in "+to_string(debut_year)+"\n";
return str;
}
};
class Actress : public Person
{
public:
Actress(string n,string c,int e,int l)
{
this->name=n;
 this->color=c;
this-> number_of_eyes=e;
this-> debut_year=l;
}
 string toString()
{
string str="The person "+name+" is an Actress. She is "+color+" in color, has "+to_string(number_of_eyes)+" eyes and debut in "+to_string(debut_year);
return str;
}
};

int main()
{
	string c,n;
	int e;
	int l;
	cin>>n;
	cin>>c;
	cin>>e;
	cin>>l;
	
	Actor m(n,c,e,l);
//	cin.ignore();
	cin>>n;
	cin>>c;
	cin>>e;
	cin>>l;
	Actress j(n,c,e,l);
	cout<<m.toString();
	cout<<j.toString();
	return 0;
}
