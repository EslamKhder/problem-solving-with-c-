#include<bits/stdc++.h>
using namespace std;
int main(){
	int size1,size2,num;
	cin>>size1>>size2;
	vector<int> arr(size1);
	for(int i=0;i<size1;i++){
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<size2;i++){
		cin>>num;
		cout<<upper_bound(arr.begin(),arr.end(),num) - arr.begin()<<" ";
	}
}
