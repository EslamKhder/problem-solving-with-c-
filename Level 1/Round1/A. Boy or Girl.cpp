#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	string name;
	cin>>name;
	int counter;
	int flag = 1;
	
	for(int i=0;i<name.size();i++){
		for(int z=i+1;z<name.size();z++){
			if(name[i] == name[z]){
				flag = 0;
				break;
			}
		}
		if(flag){
			counter++;
		}
		
		flag = 1;
	}
	
	if(counter % 2 == 0){    /////             2 4 6 8 10   / 2 = 1 2 3
		cout<<"CHAT WITH HER!"<<endl;
	} else {
		cout<<"IGNORE HIM!"<<endl;
	}
}
