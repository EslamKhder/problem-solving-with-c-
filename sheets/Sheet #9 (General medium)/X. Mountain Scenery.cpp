#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,num; // 3 2
	cin>>size>>num;
	int points = (size * 2) + 1; // 7
	int arr[points];
	for(int i=0;i<points;i++){
		cin>>arr[i]; 
		// 0 1 2 3 4 5 6  
		// 0 5 4 5 1 5 2
		// 0 4 4 5 1 5 2 
	}
	for(int i=1;i<points;i++){ // 1 2 3 4 5 
		if(arr[i] > arr[i - 1] + 1 && arr[i] > arr[i+1] + 1){
			arr[i]--;
			num--;
			if(num == 0){
				break;
			}
		}
	}
	for(int i=0;i<points;i++){
		cout<<arr[i]<<" "; 
		// 0 1 2 3 4 5 6  
		// 0 5 4 5 1 5 2  
	}
}
