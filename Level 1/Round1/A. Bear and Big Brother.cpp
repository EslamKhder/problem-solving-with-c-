#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int fW,lW,cou=0;
	cin>>fW>>lW;
	
	while(fW <= lW){
		fW = fW *3;
		lW = lW *2;
		cou++;
	}
	cout<<cou<<endl;
}
