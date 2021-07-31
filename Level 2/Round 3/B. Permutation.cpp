#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){ // 
	int num;
	int arr[6000] = {0};
	cin>>num;
	for(int i=0;i<num;i++){
		int value;
		cin>>value;
		if(value <= num){
			arr[value] = 1;
		}
	}
	cout<<count(arr + 1,arr+num + 1,0)<<endl;
}
