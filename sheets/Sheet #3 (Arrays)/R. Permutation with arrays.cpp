#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int arr1[size]; // 2 3 4 7
	int arr2[size];//  2 3 4 9
	for(int i=0;i<size;i++){
		cin>>arr1[i];
	}
	sort(arr1,arr1+size);
	for(int i=0;i<size;i++){
		cin>>arr2[i];
	}
	sort(arr2,arr2+size);
	int flag = 0;
	for(int i=0;i<size;i++){
		if(arr1[i] != arr2[i]){
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		cout<<"yes"<<endl;
	} else {
		cout<<"no"<<endl;
	}
}
