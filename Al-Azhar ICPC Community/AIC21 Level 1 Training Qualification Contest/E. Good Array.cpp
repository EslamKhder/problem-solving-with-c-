#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,flag = 0; // 4
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){ // 0 1 2 3
		cin>>arr[i];
	}
	for(int i=0;i<size;i++){ // 0 1 2 3
		if(arr[i] == 1 || arr[i] == 3){
			flag = 1;
			break;
		}
	}
	if(flag == 1){
		cout<<"Bad";
	} else {
		cout<<"Good";
	}
}
