#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size; // 4
	cin>>size;
	int flag = 0;
	int arr[size]; // arr[4]  0 1 2 3
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int search;
	cin>>search;
	for(int i=0;i<size;i++){
		if(arr[i] == search){
			cout<<i<<endl;
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		cout<<-1<<endl;
	}
}
