#include<iostream>
using namespace std;
class Hero{
	private:
		int heigth;
	public:
		string name;
		
		Hero(){
	
		};
		
		Hero(int h){
			this->heigth=h;
		}
		
		Hero(int height, string name){
			this->heigth=height;   // this keyword distinguish between the both height because 
			this->name=name;       // this keyword is the pointer of current object
		}
		
		void display(){
			cout<<this->heigth<<"\t"<<this->name<<"\n";
		}
		
		Hero(Hero& temp){
			this->heigth = temp.heigth;
			this->name = temp.name;
			cout<<"\t"<<"Khud ka copy constructor"<<"\n";
		}
		
		
};

int main(){
	Hero h1;//static allocation
	h1.name="Kunal";
	h1.display();
	
	Hero h2(20);//parametrized constructor 
	h2.display();
	
	Hero h3(30,"Kanha Ji");
	h3.display(); // double parametrized constructor
	
	
	Hero *h4 = new Hero; // Dynamic alloction
	h4->name="Krishn Ji";
	h4->display();
	
	Hero *h5 = new Hero(50,"DevkiNandan");
	h5->display();
	
	Hero h6(h3); //  Default Copy constructor
	h6.display();
	
	h4=h5;      // Copy Assignment Operator
	h4->display();
	
	
	
}
