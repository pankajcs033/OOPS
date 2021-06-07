#include<iostream>
using namespace std;

class Counter{
	private: 
		int count;
	public:
		void set(int c){
			count = c;
		}
		int get(){
			return count;
		}
		void read(){
			cout<<"Enter value ";
			cin>>count;
		}
		void print(){
			cout<<"Count "<<count;
		}
};

int main(){
	Counter c;
	c.read();
	c.print();
	c.set(10);
	cout<<c.get();
}
