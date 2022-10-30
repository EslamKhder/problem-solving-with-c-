#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size; // 5
	int arr[size]; //arr[5]        1 -2 0 3 4
	for(int i=0;i<size;i++){ // 0 1 2 3 4
		cin>>arr[i];
	}
	for(int i=0;i<size;i++){ // 0 1 2 3 4
		if(arr[i]>0){
			arr[i] = 1;
		} else if (arr[i]<0){
			arr[i] = 2;
		}
	}
	for(int i=0;i<size;i++){ // 0 1 2 3 4
		cout<<arr[i]<<" ";
	}
	
}
