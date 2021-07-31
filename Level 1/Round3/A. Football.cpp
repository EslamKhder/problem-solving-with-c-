#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin>>size;
	map<string,int> foot;
	
	for(int i=0;i<size;i++){
		string key;
		cin>>key;
		if(foot[key] == 0){
			foot[key] = 1;
		} else {
			foot[key] = foot[key] + 1;
		}
	}
	map<string,int>::iterator myFoot;
	string resKey = foot.begin() -> first;
	int resValue = foot.begin() -> second;
	
	for(myFoot = foot.begin(); myFoot != foot.end();myFoot++){
		if(myFoot -> second > resValue){
			resKey = myFoot -> first;
			resValue = myFoot -> second;
		}
	}
	cout<<resKey<<endl;
}
