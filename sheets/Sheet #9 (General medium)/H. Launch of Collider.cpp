#include<bits/stdc++.h>
using namespace std;
int main() {
	int size;
	string sq;
	cin>>size>>sq;
	long long arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	/*
		4
		0123
		RLRL
		2 4 6 10
	*/
	long long time = 0,minTime = 100000000000;
	for(int i=0;i<size-1;i++){// i=0  i<3   i = 2    0 1 2    
		if(sq[i] == 'R' && sq[i+1] == 'L'){
			time = (arr[i+1] - arr[i]) / 2; //1   2
			if(time < minTime){
				minTime = time;
			}
		}
	}
	if(minTime == 100000000000){
		cout<<-1<<endl;
	} else {
		cout<<minTime<<endl;
	}
}
