#include<iostream>
using namespace std;

class Person{
	private:
		string name;
	public:
		void inputName(){
			cout<<"Enter Name ";
			cin>>name;
		}
		void displayName(){
			cout<<name<<endl;
		}
		virtual void inputData() = 0;
		virtual void display() = 0;
};

class student : public Person{
	int marks;
	void inputData(){
		inputName();
		cout<<"Enter Marks ";
		cin>>marks;
	}
	void display(){
		displayName();
		cout<<marks<<endl;
	}
};

class professor : public Person{
	int salary;
	void inputData(){
		inputName();
		cout<<"Enter salary ";
		cin>>salary;
	}
	void display(){
		displayName();
		cout<<salary<<endl;
	}
};

int main(){
	Person *p[2];
	p[0] = new student();
	p[0]->inputData();
	p[0]->display();
	
	p[1] = new professor();
	p[1]->inputData();
	p[1]->display();
}
