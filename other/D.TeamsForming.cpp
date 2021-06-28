#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin>>size;
	int nums[size];
	for(int i=0;i<size;i++){
		cin>>nums[i];
	}
	sort(nums, nums + size);
	int res = 0;
	for(int i=0;i<size;i+=2){
		res+= nums[i+1] - nums[i]; 
	}
	cout<<res<<endl;
}
