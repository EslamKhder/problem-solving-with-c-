#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[5000];
int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i=1;i<=size;i++){ // i =0 i<4  0 1 2 3     // i = 1 i<=4  1 2 3 4
		int value;
		cin>>value;
		arr[value] = i;
	}
	for(int i=1;i<=size;i++){
		cout<<arr[i]<<endl;
	}
}
