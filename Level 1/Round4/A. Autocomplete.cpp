#include<bits/stdc++.h>
using namespace std;
int main()
{
	string val;
	cin>>val;
	int x;
	cin>>x;
	int cou = 0;
	string resVal = "";
	int size = 0;
	for(int i=0;i<x;i++){
		string myVal;
		cin>>myVal;
		
		if(myVal.rfind(val, 0) == 0){
			if(resVal == ""){
				resVal = myVal;
				size = myVal.length();
				continue;
			}
			if(myVal.length() <= size){
				resVal = myVal;
				size = myVal.length();
			}
		}
		
	}
	if(resVal == ""){
		cout<<val<<endl;
	} else {
		cout<<resVal<<endl;
	}
	
}
