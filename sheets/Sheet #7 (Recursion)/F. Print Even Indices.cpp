#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int size,int index){
    if(index > size - 1){
    	return;
	}	
	print(arr,size,index+2);
	cout<<arr[index]<<" ";
}
/*
void print(int arr[],int size,int index){ 
    //  0 1 2 3
    // [1 4 2 7] 4 0
    if(index > size - 1){
    	return;
	}
	---------------------------------- print(arr,size,index+2);
	void print(int arr[],int size,int index){
	    if(index > size - 1){
	    	return;
		}
		return print(arr,size,index+2);
		cout<<arr[index]<<" "; // arr[2]
	}
	cout<<arr[index]<<" ";//arr[0]
}
*/
int main() {
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	print(arr,size,0);
}
