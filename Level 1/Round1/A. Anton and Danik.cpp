#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size,an=0,di=0;
	cin>>size;
	string name; // ADAAAA
	cin>>name;
	
	for(int i=0;i<size;i++){
		if(name[i] == 'A'){
			an++;
		} else {
			di++;
		}
	}
	if(an > di){
		cout<<"Anton"<<endl;
	} else if(an < di){
		cout<<"Danik"<<endl;
	} else{
		cout<<"Friendship"<<endl;
	}
}
