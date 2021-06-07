#include<iostream>
using namespace std;

class twoNum{
	private:
		int a;
		int b;
		
	public:
		void input(int a, int b){
			this->a = a;
			this->b = b;
		}
		void print(){
			cout<<"\nNumber 1 "<<a;
			cout<<"\nNumber 2 "<<b;
		}
		twoNum compare(twoNum A){
			int sum1, sum2;
			sum1 = this->a + this->b;
			sum2 = A.a + A.b;
			return sum1 > sum2 ? (*this) : A;
		}
};

int main(){
	twoNum A, B, large;
	A.input(40, 20);
	A.print();
	B.input(20, 30);
	B.print();
	large = A.compare(B);
	cout<<"\n\nLarge\n";
	large.print();
}
