#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size,removeSize;
	string value;
	cin>>size>>removeSize;
	cin>>value;
	int start = 'a'; // 97
	int end = 'z'; 
	for(int i= start;i<=end;i++){
		
		
		for(int x =0;x<size;x++){
			if(removeSize == 0){
				break;
			}
			if(value[x] == i){
				value[x] = ' ';
				removeSize--;
			}
		}
	}
	
	for(int i=0;i<size;i++){
		if(value[i] != ' '){
			cout<<value[i];
		}
	}
	
}

