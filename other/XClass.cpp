#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int size = 10e6;
int arr1[size];
int arr2[size];
int main(){
	int mySize;
	cin>>mySize;
	for(int i=0;i<mySize;i++){
		cin>>arr1[i];
	}
	sort(arr1,arr1+mySize);
	for(int i=0;i<mySize;i++){
		cin>>arr2[i];
	}
	sort(arr2,arr2+mySize);
	
	if(arr1[0] < arr2[0]){
		for(int i=0;i<mySize;i++){
			if(arr1[i] >= arr2[i]){
				cout<<"No"<<endl;
				return 0;
			}
		}
	} else {
		for(int i=0;i<mySize;i++){
			if(arr2[i] >= arr1[i]){
				cout<<"No"<<endl;
				return 0;
			}
		}
	}
	cout<<"Yes"<<endl;
	
	
}
