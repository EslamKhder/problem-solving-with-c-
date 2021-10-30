#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}// arr [5,2,3,1,8]   size = 5
	sort(arr,arr+size);
	int temp = 0;
	int result = 0;
	int counter = 0;
	for(int i =0;i<size;i++){  // i = 4
	// 0 1 2 3 4 5
	// 1 1 2 2 4 5
		if(i == 0){
			temp = arr[i];
			result = 1;
		} else {
			if(temp == arr[i]){
				result++;
			} else if (temp+1 == arr[i]){
				counter += result; // c = 2;
				temp = arr[i];
				result = 1;
			} else {
				result = 1;
				temp = arr[i];
			}
		}
	}
	cout<<counter<<endl;
	
}
