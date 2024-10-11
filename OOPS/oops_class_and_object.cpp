#include<iostream>
using namespace std;
class Hero{
	public:
		int heigth;
		string name;
		
		void display(){
			cout<<"The name of Hero is : "<<name<<" and height is : "<<heigth<<endl;
		}
};
int main(){
	Hero h1;
	h1.heigth=12;
	h1.name="Kunal";
	h1.display();
}
