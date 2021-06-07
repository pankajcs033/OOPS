#include<iostream>
using namespace std;

template <class T>
class sample{
	private:
		T num1;
		T num2;
	public:
		void input(){
			cout<<"\nEnter 2 numbers ";
			cin>>num1>>num2;
		}
		void print(){
			cout<<"sum "<<num1+num2;
		}
};

int main(){
	sample<int> s;
	s.input();
	s.print();
	
	sample<float> p;
	p.input();
	p.print();
}
