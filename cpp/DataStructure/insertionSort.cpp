#include <iostream>
using namespace std;
//created by peterLymo 2021
int insertSort(int arr[] , int n){
	int i,j,key;
	for(i = 1;i < n; i++){
		j = i;
		while (j > 0 && arr[j-1] > arr[j]){
			key = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = key;
			j--;
		}
	}
}

int printing(int arr[] , int n){
	for (int i = 0; i < n; i++){
		cout<<arr[i]<<",";
	}
}
int printingUnsorted(int arr[] , int n){
	for (int i = 0; i < n; i++){
		cout<<arr[i]<<",";
	}
}
int main(){
	//example number 4,3,1,5 we need to sort 
	int arr[] = {4,3,1,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"printing unsorted array :"<<endl;
	printingUnsorted(arr,n);
	cout<<endl<<"Printing sorted array :"<<endl;
	insertSort(arr,n);
	printing(arr,n);
	
}
