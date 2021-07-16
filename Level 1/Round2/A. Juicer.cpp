#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

	int size,b,max,sum=0,counter=0;
	cin>>size>>b>>max;
	for(int i=0;i<size;i++){
		int value;
		cin>>value;
		
		if(value <= b){
			sum += value;
		}
		if(sum > max){
			counter++;
			sum =0;
		}
	}
	cout<<counter<<endl;
}
