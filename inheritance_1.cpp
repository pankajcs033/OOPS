#include<iostream>
using namespace std;

class sample1{
	private:
		int x;
	public:
		sample1(){
			x = 0;
			cout<<"\nDEFAULT BASE\n";
		}
		sample1(int x){
			this->x = x;
			cout<<"\nPARAMETRIC BASE\n";
		}
		void setx(int x){
			this->x = x;
		}
		int getx(){
			return x;
		}
		~sample1(){}
};

class sample2 : public sample1{
	private:
		int y;
	public:
		sample2(){
			y = 0;
			cout<<"\nDEFAULT DERIVED\n";
		}
		sample2(int x, int y){
			setx(x);
			sety(y);
			cout<<"\nPARAMETRIC DERIVED\n";
		}
		
		void sety(int y){
			this->y = y;
		}
		int gety(){
			return y;
		}
		void print(){
			cout<<"\nX "<<getx();
			cout<<"\nY "<<gety();
		}
		~sample2(){}
};

int main(){
	sample2 s;
	s.print();
	sample2 s2(10, 20);
	s2.print();
}
