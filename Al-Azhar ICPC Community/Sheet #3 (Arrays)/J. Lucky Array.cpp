#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size; // 5
	cin>>size;
	int nums[size]; // nums[5]
	for(int i=0;i<size;i++){
		              // 0 1 2 3 4
		cin>>nums[i]; // [8 8 9 5 9]
	}
	int min = nums[0]; // 8
	int counter = 0; // 1 2
	for(int i=0;i<size;i++){
		if(min == nums[i]){
			counter++;
		}
		if(min > nums[i]){
			min = nums[i];
			counter = 1;
		}
	}
	
	if(counter % 2 == 0){ // 4 / 2 = 2
		cout<<"Unlucky"<<endl;
	} else {
		cout<<"Lucky"<<endl;
	}
	
	
}
