#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	string password[k]; // a b c  ['a','b','c']   // k = 3
	string finishPassword[n];   // n = 4   ['a'.'b','c','a']
	int start = 97;
	for(int i=0;i<k;i++){ // k =3    
		password[i] = start;  // a b c
		start++;
	}
	
	int res = 0; // 5 / 2
	for(int i=0;i<n;i++){
		finishPassword[i] = password[res];
		res++;
		if(res == k){
			res=0;
		}
	}
	for(int i=0;i<n;i++){
		cout<<finishPassword[i];
	}
	
}

/*
	5/2 = 2.5
	5%2 = 5


*/
