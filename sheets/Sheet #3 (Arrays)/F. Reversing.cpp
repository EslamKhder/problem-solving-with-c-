#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size; // 5
	cin>>size;
	int nums[size]; // nums[5]
	for(int i=0;i<size;i++){ // 0 1 2 3 4    
	                        // [1,2,3,4,5]
		cin>>nums[i];
	}
	for(int i = size-1;i>=0;i--){
		cout<<nums[i]<<" ";
	}
	
}
