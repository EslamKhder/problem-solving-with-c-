#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	string pass1,pass2;
	int size,res = 0;
	cin>>size;
	cin>>pass1>>pass2;
	for(int i=0;i<size;i++){
		int num1 = pass1[i] - '0';
		int num2 = pass2[i] - '0';
		int myRes1 = abs(num1 - num2);
		int myRes2 = 0;
		
		if(num1 < num2){
			myRes2 = num1;
			myRes2 += (9 - num2);	
			myRes2++;
		} else {
			myRes2 = 9 - num1;
			myRes2 += num2;
			myRes2++;
		}
		if(myRes1 > myRes2){
			res += myRes2;
		} else {
			res += myRes1;
		}	
	}
	cout<<res<<endl;
}
/*

1 ===>    


*/
