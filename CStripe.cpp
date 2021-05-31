#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int size = 1e5+5;
int arr[size];
int main(){
	int mySize;
	cin>>mySize;
	for(int i=1;i<=mySize;i++){ // 2
		int num;
		cin>>num;
		arr[i] = arr[i -1] + num;
	}
	int cou = 0;
	for(int i=1;i<mySize;i++){ 
		if(arr[mySize] - arr[i] == arr[i]){
			cou++;
		}
	}
	cout<<cou<<endl;
	
}
