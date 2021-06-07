#include<iostream>
using namespace std;

const int& max(int arr[5], int n){
	int i = 0;
	for(int j=0; j<n; j++){
		if(arr[j] > arr[i])
			i = j;
	}
	return  arr[i];
}

int main(){
	int a[] = {10, 40 ,9, 30, 40};
	int largest = max(a, 5);
	cout<<"largest "<<largest;
}
