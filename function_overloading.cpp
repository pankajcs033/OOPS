#include<iostream>
using namespace std;

int add(const int a[], int size){
	int i = 0;
	int sum = 0;
	for(i = 0; i < size; i++){
		sum += a[i];
	}
	return sum;
}

double add(const double a[], int size){
	int i = 0;
	double sum = 0;
	for(i = 0; i < size; i++){
		sum += a[i];
	}
	return sum;
}

int main(){
	int a[5] = {1,2,3,4,5};
	double x[4] = {1.2, 2.3, 3.4, 4.5};
	int sumi = add(a, 5);
	cout<<sumi<<endl;
	double sumd = add(x, 4);
	cout<<sumd<<endl;
}
