#include<bits/stdc++.h>
using namespace std;
long long arr2[10000001]={0};
int main() {
	long long size;
	cin>>size;
	long long arr1[size];
	for(long long i =0;i<size;i++){
		cin>>arr1[i];
		arr2[arr1[i]]++;
	}
	long long res = 0;
	for(long long i=0;i<10000001;i++){
		if(arr2[i] > 1){
			res += arr2[i] - 1;
		}
	}
	if(res == 0){
		cout<<-1;
	} else {
		cout<<res;
	}
}
