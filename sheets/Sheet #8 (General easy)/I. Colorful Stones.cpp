#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string val1,val2; // fds   ['f','d','s']
	cin>>val1>>val2;
	int counter = 0;
	
	for(int i=0;i<val2.length();i++){
		if(val1[counter] == val2[i]){
			counter++;
		}
	}
	counter++;
	cout<<counter<<endl; 
	/*
		counter = 5;
		cout<<++counter<<endl; 6
		cout<<counter++<<endl; 5
	*/
}
