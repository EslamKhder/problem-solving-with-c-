#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int left,int right,int search){
	while(left <= right){
		int mid = left + (right-left)/2;
		if(arr[mid] == search){
			return mid;
		} else if (arr[mid] < search){
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}	
	return -1;
}
int main()
{
	int size,numSearch;
	cin>>size>>numSearch;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	sort(arr,arr+size);
	while(numSearch--){ // 3    3 2 1
		int search;
		cin>>search;
		int result = binarySearch(arr,0,size-1,search);
		if(result == -1){
			cout<<"not found\n";
		} else {
			cout<<"found"<<endl;
		}
	}
	
}
