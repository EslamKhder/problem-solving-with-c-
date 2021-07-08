#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string value1,value2; // 
	cin>>value1>>value2;
	
	/*
	aaa
	aaA


	*/
	for(int i=0;i<value1.size();i++){ // 0  ===> 6
		int n1 = tolower(value1[i]);
		int n2 = tolower(value2[i]);
		if(n1 < n2){
			cout<<-1<<endl;
			return 0;
		} else if(n1 > n2){
			cout<<1<<endl;
			return 0;
		}
	}
	cout<<0<<endl;
}
