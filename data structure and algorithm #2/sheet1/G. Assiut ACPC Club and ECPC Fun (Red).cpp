#include<bits/stdc++.h>
using namespace std;
long long arr1[100005],arr2[100005];
int main() {
	long long size,start,end;// 5
	cin>>size;
	for(int i=1;i<=size;i++){//1 5
		cin>>arr1[i];
	}
	long long process;
	cin>>process;
	while(process--){
		cin>>start>>end;//2 4
		arr2[start]++;
		arr2[end+1]--;
	}
	for(int i=1;i<=size;i++){
		arr2[i] += arr2[i-1];
	}
	long long counter = 0;
	for(int i=1;i<=size;i++){
		if(arr2[i] == 0){
			counter++; // 2
		}
	}
	cout<<counter<<endl;
	for(int i=1;i<=size;i++){
		if(arr2[i] == 0){
			cout<<arr1[i]<<" ";
		}
	}
}
