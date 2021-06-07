#include<iostream>
using namespace std;

class twoNum{
	private:
		int a;
		int b;
	public:
		void input(){
			cout<<"\nEnter number 1 ";
			cin>>a;
			cout<<"\nEnter number 2 ";
			cin>>b;
		}
		void print(){
			cout<<"\nNumber 1 "<<a;
			cout<<"\nNumber 2 "<<b;
		}
		void add(twoNum A, twoNum B){
			a = A.a + B.a;
			b = A.b + B.b;
		}
};

int main(){
	twoNum a, b, c;
	a.input();
	b.input();
	a.print();
	b.print();
	c.add(a, b);
	c.print();
}
