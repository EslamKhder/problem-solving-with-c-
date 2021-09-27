#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size;     // 0 1 2 3 4
	int arr[size]; // 4 1 3 10 8    1 2 3 4 5
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int min = arr[0]; // 4
	int max = arr[0]; // 4
	int minIndex = 0;
	int maxIndex = 0;
	for(int i=1;i<size;i++){
		if(min > arr[i]){
			min = arr[i]; // 1
			minIndex = i;
		}
		if(max < arr[i]){
			max = arr[i];
			maxIndex = i;
		}
	}
	arr[minIndex] = max;
	arr[maxIndex] = min;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
}
