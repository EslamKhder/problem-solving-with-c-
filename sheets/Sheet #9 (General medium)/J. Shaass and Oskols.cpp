#include<bits/stdc++.h>
using namespace std;
int main() {

	int size,sizeKill,boxNum,pa;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cin>>sizeKill;
	for(int i=0;i<sizeKill;i++){
		cin>>boxNum>>pa; // 2 2
		arr[boxNum - 2] += pa - 1;
		arr[boxNum] += arr[boxNum - 1] - pa;
		arr[boxNum - 1] = 0;
	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
}
