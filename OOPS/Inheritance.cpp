/* Inheritance 
It means it inherit  some properties from a parent class
*/

#include<iostream>
using namespace std;
class Human{
	public:
		int age;
		float heigth;
		void body(){
			cout<< "I have a body"<<"\n";
		}
		
		
};
class Male:public Human{
	public:
		string name;
		string color;
		void sleep(){
			cout << "Sleeping"<<"\n";
		}
};

int main(){
	Male m;
	m.color;
	m.name;
	m.sleep();
	m.age;
	m.body();
	m.heigth;
	
}
