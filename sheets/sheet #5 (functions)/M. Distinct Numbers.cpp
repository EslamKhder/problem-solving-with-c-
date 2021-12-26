#include<bits/stdc++.h>
using namespace std;
const int s = 1000; // [9, 4, 5, ,, , , , , , , ,, , , , ,,]
int countNumber(int arr[s],int size){
	int count = 1;
	for(int i=1;i<size;i++){
		if(arr[i] != arr[i-1]){
			count++;
		}
	}
	return count;
}
int main()
{
	int size;
	cin>>size; // 3
	if(size == 0){
		cout<<0;
		return 0;
	}
	int arr[s];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	sort(arr,arr+size);
	
	cout<<countNumber(arr,size)<<endl;
}
