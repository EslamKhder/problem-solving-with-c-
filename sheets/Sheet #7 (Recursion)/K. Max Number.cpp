#include<bits/stdc++.h>
using namespace std;
int size;
int mx=-(1e9+2);
void maxNumber(int arr[]){
	if(size == 0){
		return;
	}
	// 
	// 5             -     5;
	// 0  1 2 3 4           
	// 1 10 3 4 5
	mx = max(mx,arr[--size]); // 4 3 2 1 0
	maxNumber(arr); // 
	
}
int main()
{
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	maxNumber(arr);
	cout<<mx;
}
