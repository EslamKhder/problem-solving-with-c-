#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[8];
	for(int i=0;i<8;i++){
		cin>>arr[i];
	}
	int poin =0;
	int sum =0;
	int res = 0;
	for(int i=0;i<8;i++){ // i = 5
		for(int z =i;z<4+i;z++){ // z = 5    z < 9     5 6 7 8
			if(z>7){
				sum +=arr[poin];
				poin++;
			} else {
				sum += arr[z];
			}
		}
		if(sum > res){
			res = sum;
		}
		sum =0;
		poin=0;
	}
	cout<<res<<endl;
}
