#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int personSize,height,personHeight,result;
int main(){
	cin>>personSize>>height;
	while(personSize--){ // 3-- 2-- 1-- 0
		cin>>personHeight;
		result++;
		if(personHeight > height){
			result++;
		}
	}
	cout<<result<<endl;
}
