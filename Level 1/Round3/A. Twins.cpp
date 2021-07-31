#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin>>size;
	int arr[size];
	int sum = 0;
	if(size == 1){
		cout<<1<<endl;
		return 0;
	}
	
	for(int i=0;i<size;i++){
		int coin; // 4
		cin>>coin;
		arr[i] = coin;
		sum += coin;
	}
	int n = sizeof(arr) / sizeof(arr[0]); 
	sort(arr, arr + n);
	int res = sum / 2;
	int myRes = 0;
	int counter = 0;
	for(int i =size - 1;i>=0;i--){
		myRes += arr[i];
		counter++;
		
		if(myRes > res){
			break;
		}
	}
	cout<<counter<<endl;
	

}
