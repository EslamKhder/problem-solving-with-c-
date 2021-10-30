#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size; // 6
	int arr[size];
	// 0 1 2 3 4 5
	// 1 2 3 4 5 6
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	for(int i=0;i<size/2;i++){ 
		// i = 0   arr[0]  arr[4]
		// i = 1   arr[1]  arr[3]
		// i = 2   arr[2]  arr[3]
		// size / 2 = 6 / 2 = 3   0 1 2
		cout<<arr[i]<<" "<<arr[size - i - 1]<<" ";
	}
	if(size % 2 != 0){
		cout<<arr[size / 2]; // 5 / 2 = 2.5  = 2
	}
}
