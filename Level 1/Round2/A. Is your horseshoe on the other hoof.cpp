#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int,int> colers;
	for(int i=0;i<4;i++){
		int value;
		cin>>value;
		colers[value] = value;
	}
	cout<<4 - colers.size()<<endl;
}
