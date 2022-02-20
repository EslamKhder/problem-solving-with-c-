#include<bits/stdc++.h>
using namespace std;
int size;
long long sum(long long arr[]){
	// 5
	// 0 1 2 3 4
	// 5 4 3 2 1
	if(size == 0){
		return 0;
	}
	// 1 + 2 + 3 + 4 + 5 + 0
	return arr[--size] + sum(arr); // 0
}
int main()
{
	cin>>size;
	long long arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<sum(arr);
}
