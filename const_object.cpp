#include<iostream>
using namespace std;

class Demo{
	private:
		int a;
		const int b;
	public:
		Demo(int x, int y) : a(x), b(y){}
		
		Demo() : a(0), b(0){}
		
		void display() const{
			cout<<"-> A : "<<a<<" B : "<<b<<endl;
		}
		
		void print(){
			cout<<"A : "<<a<<" B : "<<b<<endl;
		}
};

int main(){
	const Demo d1;
	d1.display();
	//d1.print();		// const object only calls to const functions
	
	Demo d2(10, 20);	// When a function is declared as const, it can be called
						// on any type of object, const object as well as non-const objects.
	d2.display();
	d2.print();
}
