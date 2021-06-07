#include<iostream>
using namespace std;

class staticExample{
	private: 
		int x;
		static int y;
	public:
		staticExample(){					// default const
			x = 0;
		}
		staticExample(int a){				// parametric const
			this->x = a;
		}
		void setx(int a){					// set
			this->x = a;
		}
		int getx(){							// get
			return x;
		}
		static void sety(int a){			// static set
			staticExample::y = a;
		}
		static int gety(){					// static get
			return staticExample::y;
		}
		void setxy(int x, int y){
			setx(x);
			sety(y);
		}
		void print(){
			cout<<endl;
			cout<<"X "<<getx();
			cout<<" Y "<<gety();
		}
		~staticExample(){}
		
};

int staticExample::y; 				// must define outside the class

int main(){
	staticExample s1, s2, s3;
	s1.print();
	
	s2.setx(5);
	s2.sety(10);
	s2.print();
	
	s3.setxy(10, 20);
	s3.print();
	return 1;
}
