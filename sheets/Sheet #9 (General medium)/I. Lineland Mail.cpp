#include<bits/stdc++.h>
using namespace std;
int main() {
    long long size,maxx,minn; // 4
    cin>>size;
    long long arr[size]; 
    for(int i=0;i<size;i++){
    	cin>>arr[i];
	}
	// 0  1  2 3
	// -5 -2 2 7
	for(int i=0;i<size;i++){ // 0  1 2 3
		if(i == 0){
			minn = abs(arr[i] - arr[i + 1]); // -5 + 2  -3  = 3
			maxx = abs(arr[i] - arr[size - 1]); // -5 - 7 = - 12
		} else if(i == size - 1){
			minn = abs(arr[i] - arr[i - 1]); // 7 - 2 = 5
			maxx = abs(arr[i] - arr[0]); // -5 - 7 = - 12
		} else {
			minn = min(abs(arr[i] - arr[i+1]) , abs(arr[i] - arr[i-1])); //
			maxx = max(abs(arr[i] - arr[0]) , abs(arr[i] - arr[size - 1])); // 
		}
		cout<<minn<<" "<<maxx<<endl;
	}
}
