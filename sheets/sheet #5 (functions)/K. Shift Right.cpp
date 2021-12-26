#include<bits/stdc++.h>
using namespace std;
const int s = 100001;
void print1(int arr[s],int theShift,int size){
	for(int i = theShift;i<size;i++){ // i = 5   i< 5
		cout<<arr[i]<<" ";
	}
}
void print2(int arr[s],int theShift){
	for(int i = 0;i<theShift;i++){ // i = 0   i< 4    0 1 2 3
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int size,times;
	cin>>size>>times;
	int arr[s];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int sh = times % size;
	print1(arr,size - sh,size);
	print2(arr,size - sh);
	
}
