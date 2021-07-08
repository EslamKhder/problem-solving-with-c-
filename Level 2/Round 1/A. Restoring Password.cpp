#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string password; // hhh   ['h','h','h']
	cin>>password;
	map<string,int> system;
	for(int i=0;i<10;i++){
		string systemPass;
		cin>>systemPass;
		system[systemPass] = i;
	}
	for(int i=0;i<80;i+=10){
		string val = password.substr(i,10);
		cout<<system[val];
	}
	
}
