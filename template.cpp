#include<iostream>
using namespace std;

template<typename T> 
T add(T num1, T num2){
	return num1+num2;
}

template<typename T>
void printArr(const T arr[], const int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}

int main(){
	int a[] = {1,2,3,4,5};
	double b[] = {1.2, 2.2, 3.3, 4.4};
	printArr(a, 5);
	printArr(b, 4);
}
