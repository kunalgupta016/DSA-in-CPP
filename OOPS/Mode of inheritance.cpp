/*  MODE OF INHERITANCE

|---------------------------------------------------------------|
| BASE CLASS    |  PUBLIC       |  PROTECTED    | PRIVATE       |
|				|               |               |               |
|---------------|---------------|---------------|---------------|
|				|               |               |               |
| PUBLIC		|  PUBLIC       |  PROTECTED    | PRIVATE       |
|				|               |               |               |
|---------------|---------------|---------------|---------------|
|---------------|---------------|---------------|---------------|
|				|               |               |               |
| PROTECTED		|  PROTECTED    |  PROTECTED    | PRIVATE       |
|				|               |               |               |
|---------------|---------------|---------------|---------------|
|				|               |               |               |
| PRIVATE		|NOT ACCESSIBLE |NOT ACCESSIBLE |NOT ACCESSIBLE |
|				|               |               |               |
|---------------|---------------|---------------|---------------|*/


// example of BASE CLASS : PUBLIC ,, INHERITED : PUBLIC

/*

#include<iostream>
using namespace std;
class Animal{
	public:
		void speak(){
			cout<<"Speaking"<<"\n";
		}
};

class Dog : public Animal{
	public:
		void bark(){
			speak();    // we use speak function of animal class
			cout << "Barking" <<"\n";
		}
};


int main(){
	Dog d;
	d.bark();
	d.speak();
	
}

*/


// example of BASE CLASS : PUBLIC , INHERITED : PROTECTED

#include<iostream>
using namespace std;
class Animal{
	
	private:
		int val;
	
	public:
		void speak(){
			cout<<"Speaking"<<"\n";
		}
};

class Dog : protected Animal{
	private:
		int age;
	public:
		void bark(){
			speak();    // we use speak function of animal class
			cout << "Barking" <<"\n";
			cout<<age<<"\n";
//			cout<<val<<"\n";
		}
		
		
};


int main(){
	Dog d;
	d.bark();
	d.speak();
	
}


