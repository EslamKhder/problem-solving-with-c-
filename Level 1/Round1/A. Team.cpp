#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin>>size;
	int cou =0;
	for(int i=0;i<size;i++){
		int s1,s2,s3;
		cin>>s1>>s2>>s3;
		int res = s1+s2+s3;
		if(res >= 2){
			cou++;
		}
	}
	cout<<cou<<endl;
}
