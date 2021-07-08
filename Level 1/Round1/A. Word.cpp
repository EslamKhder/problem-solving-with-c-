#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string name; // "smk"    ['s','m','k']  name[0]    // HouSe  ['H','o','u','S','e']
	cin>>name;
	int sm=0,ca=0;
	for(int i=0;i<name.size();i++){
		if(name[i] >=97 && name[i] <= 122){  // ( true &&  true)
			sm++;
		} else {
			ca++;
		}
	}
	char res = ' ';
	if(ca > sm){
		for(int i=0;i<name.length();i++){
			res = toupper(name[i]);
			cout<<res;
		}
	} else {
		for(int i=0;i<name.length();i++){
			res = tolower(name[i]);
			cout<<res;
		}
	}
}
