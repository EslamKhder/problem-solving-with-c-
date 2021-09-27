#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long size,range;
	cin>>size>>range; // 3
	long long arr1[size]; // 6 4 2 7 2 7
	long long arr2[size]; // 6 10 12 
	for(int i=0;i<size;i++){
		cin>>arr1[i];
		if(i == 0){
			arr2[i] = arr1[i];
		} else {
			arr2[i] = arr1[i] + arr2[i-1];
		}
	}
	while(range--){ // 3 2 1
		long long start,end;
		cin>>start>>end;
		start--;
		end--;
		long long sum = arr2[end] - arr2[start] + arr1[start];
		cout<<sum<<endl;
	}
}
