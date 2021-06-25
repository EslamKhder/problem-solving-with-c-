#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string colors="ROYGBIV";
	string myColor1 = "G";
	string myColor2 = "GB";
	string myColor3 = "GBI";
	string myColor4 = "GBIV";
	int size;
	cin>>size; // 9
	int mySize = size - 7; // 9 - 7 = 2
	if(mySize == 1){
		colors += myColor1;
	} else if(mySize == 2){
		colors += myColor2;
	} else if(mySize == 3){
		colors += myColor3;
	} else {
		while(mySize){ // 0
			if(mySize >=4){
				colors +=myColor4;
				mySize -= 4;
			} else if(mySize == 3){
				colors += myColor3;
				mySize -= 3;
			} else if(mySize == 2){
				colors += myColor2;
				mySize -= 2;
			} else {
				colors += myColor1;
				mySize -= 1;
			}
		}
	}
	cout<<colors<<endl;
	
	
}
