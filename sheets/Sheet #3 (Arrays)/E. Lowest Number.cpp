#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int value;
	int position = 3;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	value = arr[0];
	position = 1;
	for(int i = 1;i<size;i++){
		if(arr[i] < value){
			value = arr[i];
			position = i+1;
		}
	}
	cout<<value<<" "<<position<<endl;
}
