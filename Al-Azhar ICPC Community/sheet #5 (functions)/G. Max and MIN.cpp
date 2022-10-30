#include<bits/stdc++.h>
using namespace std;
void sorting(int arr[],int size){
	sort(arr,arr+size);
}
int main(){
	int size;
	cin>>size; // 4
	int arr[size]; // [5,6,7,1]
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	sorting(arr,size);// [1,5,6,7]
	cout<<arr[0]<<" "<<arr[size-1];
}
