#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string equ; //"123"    ['1','2','3']
	cin>>equ;
	int mySize = (equ.length() / 2) + 1;
	int arr[mySize];
	int counter = 0;
	for(int i=0;i<equ.length();i++){
		if(equ[i] == '+'){
			continue;
		}
		arr[counter] = equ[i] - '0';
		counter++;
	}
	int n = sizeof(arr) / sizeof(arr[0]);
	sort(arr,arr + n);
	
	for(int i=0;i<mySize;i++){ // 123
		if(i !=0){
			cout<<"+";
		}
		cout<<arr[i];  // 1+2+3
	}
	
}
