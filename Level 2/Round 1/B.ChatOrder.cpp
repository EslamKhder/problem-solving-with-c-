#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	map<string,string> em;
	int size;
	cin>>size;
	string emails[size];
	for(int i=0;i<size;i++){
		cin>>emails[i];
	}
	// {"name":"ahmed"}    key age ""
	for(int i = size-1;i>=0;i--){
		if(em[emails[i]] == ""){
			cout<<emails[i]<<endl;
		}
		
		em[emails[i]] = emails[i];
	}
	
}
