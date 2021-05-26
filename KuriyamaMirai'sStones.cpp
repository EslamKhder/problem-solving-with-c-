#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int mySize = 10e6;
int nums[mySize];
long long myNums1[mySize];
long long myNums2[mySize];
	
int main(){
	
	int size;
	scanf("%d",&size);
	for(int i =1;i<=size;i++){ // index 
		scanf("%d",&nums[i]);  // 10
		myNums1[i] += myNums1[i-1] + nums[i]; // 6 10 12
	}
	sort(nums + 1,nums + size + 1);
	for(int i =1;i<=size;i++){ // index 
		myNums2[i] += myNums2[i-1] + nums[i]; // 6 10 12
	}
	int numQue; // 3
	scanf("%d",&numQue);
	while(numQue--){
		int type,start,end;
		scanf("%d%d%d",&type,&start,&end);
		if(type == 1){
			printf("%lld \n",myNums1[end]-myNums1[start - 1]);
		} else {
			printf("%lld \n",myNums2[end]-myNums2[start - 1]);
		}
	}
	
	return 0;
	
}
