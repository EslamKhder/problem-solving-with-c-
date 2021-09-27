#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,flag=0; // 5
	cin>>size;
	int arr[size]; // arr[5]
	for(int i=0;i<size;i++){ // 0 1 2 3 4  5 
	                        // [1 2 3 2 1]
		cin>>arr[i];
	}
	for(int i=0;i<=size/2;i++){ // i = 0   i<= 2
		if(arr[i] != arr[size - 1 - i]){ // 5 - 1 - 1
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}
