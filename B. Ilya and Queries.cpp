#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string value;
	int size;
	cin>>value>>size;
	
	while(size--){
		int start,end;
		cin>>start>>end;
		int res = 0;
		for(int i =start;i<end;i++){
			if(value[i] == value[i+1]){
				res++;
			}
		}
		cout<<res<<end;
	}
	
}
