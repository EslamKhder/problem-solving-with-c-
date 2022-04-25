#include<iostream>
using namespace std;
int main(){
	int size;
	cin>>size; // 4
	int max = 0;
	int maxPosition = 0;
	int min = 101; // 0
	int minPosition = 0;
	for(int i =1;i<=size;i++){// 1 2 3 4    // 2  100
	// 33 44 11 22
		int num;
		cin>>num; // 33
		if(num > max){
			max = num; // max = 33
			maxPosition = i;
		}
		if(num <= min){
			min = num; // min =
			minPosition = i; 
		}
	}
	if(maxPosition > minPosition){
		cout<<(maxPosition-1) + (size - ++minPosition)<<endl;
	} else {
		cout<<(maxPosition-1) + (size - minPosition)<<endl;
	}
	// cout<<(maxPosition-1) + (size - minPosition)<<endl;
	// cout<<(maxPosition-1) + (size - ++minPosition)<<endl;
}
