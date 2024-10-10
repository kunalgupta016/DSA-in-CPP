#include<iostream>
using namespace std;
class Hero{
	public:
		int heigth=4;
		string name="Kunal";
			
		Hero(){
			
			cout<<++heigth<<name<<"\n";
			
			cout << "Constructor Called"<<"\n";	
		}
		~Hero(){
			
			this->heigth == 0;   // this cannot be changed 
			this->name == "Tushar"; // this cannot be changed 
			cout<<heigth<<name<<"\n";
			cout<< "Destructor called"<<"\n";
		}
		
		static int Time; //static keyword Me Object bannae ki jarurat nahi hoti
		

		
};

int Hero::Time=7; // :: is a scope resolution

int main(){
	Hero h;
	cout<<Hero::Time<<"\n";

	
}
