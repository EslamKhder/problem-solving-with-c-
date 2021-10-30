#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	// 0 1 2 3 4 5 6
	// 1 2 0 4 0 5 6
	// 2 1 0 4 0 5 6
	// 4 0 1 2 0 5 6
	for(int i=0;i<size;i++){
		if(arr[i] == 0){
			reverse(arr,arr+i);
		}
	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
