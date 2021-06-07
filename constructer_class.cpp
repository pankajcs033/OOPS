#include<iostream>
using namespace std;

class Sample{
	private:
		int x;
	public:
		Sample(){
			x = 0;
		}
		Sample(int a){
			x = a;
		}
		void set(int a){
			x = a;
		}
		int get(){
			return x;
		}
		void read(){
			cout<<"Enter number ";
			cin>>x;
		}
		void print(){
			cout<<"Value "<<x;
		}
};

int main(){
	Sample s, s1(80);
	s.print();
	s1.print();
	s.set(10);
	s.print();
	cout<<s.get();
}
