#include<bits/stdc++.h>
using namespace std;
const int s = 500;
void swapRaw(int arr[s][s],int num1,int num2,int size){
	for(int i=0;i<size;i++){
		int temp = arr[num1][i]; // 2 0
		arr[num1][i] = arr[num2][i]; // 0 0
		arr[num2][i] = temp; // 0 0
	}
}
void swapColumn(int arr[s][s],int num1,int num2,int size){
	for(int i=0;i<size;i++){
		int temp = arr[i][num2]; // 2 0
		arr[i][num2] = arr[i][num1]; // 0 0
		arr[i][num1] = temp; // 0 0
	}
}
void print(int arr[s][s],int size){
	for(int i=0;i<size;i++){ // i = 0
		for(int z=0;z<size;z++){ // z = 0
			cout<<arr[i][z]<<" "; // (1 0)  (1,1)
		}
		cout<<endl;
	}
}
int main()
{
	int size,num1,num2;
	cin>>size>>num1>>num2;
	int arr[s][s];
	
	for(int i=0;i<size;i++){ // i = 0
		for(int z=0;z<size;z++){ // z = 0
			cin>>arr[i][z]; // (1 0)  (1,1)
		}
	}	
	num1--; // 2
	num2--; // 0
	swapRaw(arr,num1,num2,size);
	swapColumn(arr,num1,num2,size);
	print(arr,size);
	
}
