#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size,div;
	cin>>size>>div;
	string result = ""; // "123"    
	if(size < 2 && div == 10){
		cout<<-1<<endl;
	} else if (size >= 2 && div == 10){
		for(int i=0;i<size - 1;i++){ // i = 0   i< 1  0 
			result += 1 + '0';
		}
		result += 0 + '0';
		cout<<result<<endl;
	} else {
		for(int i=0;i<size;i++){ 
			result += div + '0';
		}
		cout<<result<<endl;
	}
}
