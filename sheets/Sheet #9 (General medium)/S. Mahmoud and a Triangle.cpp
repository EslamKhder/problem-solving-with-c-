#include<bits/stdc++.h>
using namespace std;
int main() {
	int size; // 5
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){ // [1 5 3 2 4]  
	    //   0 1 2 3 4
	    //  [1,2,3,4,5,6,7,8,9]  1  2  3
		cin>>arr[i];
	}
	sort(arr,arr+size);
	string res = "NO";
	for(int i = size - 1;i>=2;i--){ // i = 4   size>= 3     4 3
		if(arr[i] + arr[i-1] > arr[i - 2] && arr[i-1] + arr[i - 2] > arr[i] 
			&& arr[i] + arr[i - 2] > arr[i - 1]){
			res = "YES";
			break;
		}
	}
	cout<<res;
}
