#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int num1,num2,num3;
	cin>>num1>>num2>>num3;
	int arr[6];
	arr[0] = num1+num2*num3;
	arr[1] = (num1+num2)*num3;
	arr[2] = num1*num2+num3;
	arr[3] = num1*(num2+num3);
	arr[4] = num1*num2*num3;
	arr[5] = num1+num2+num3;
	int size = sizeof(arr) / sizeof(arr[0]);
	sort(arr,arr + size);
	cout<<arr[5]<<endl;
}
