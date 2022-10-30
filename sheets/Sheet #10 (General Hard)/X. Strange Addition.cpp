#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void fast()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
}
int main()
{
	int size,flag = 0;
	cin>>size;
	int arr[size];
	vector<int> v;

	for(int i=0;i<size;i++){
		cin>>arr[i];
		if(arr[i] == 0 || arr[i] == 100){
			v.push_back(arr[i]);
		} else if(arr[i] >=1 && arr[i]<=9 && !flag){
			v.push_back(arr[i]);
			flag = 1;
		}
	}
	
	if(flag){
		for(int i=0;i<size;i++){
			if(arr[i] >=10 && arr[i] < 100 && arr[i] % 10 == 0){
				v.push_back(arr[i]);
				break;
			}
		}
	} else {
		for(int i=0;i<size;i++){ // 20
			if(arr[i] >=10 && arr[i] < 100){
				v.push_back(arr[i]);
				break;
			}
		}
	}
	
	cout<<v.size()<<endl;
	
	for(int i=0;i<v.size();i++){ // 20
		cout<<v[i]<<" ";
	}
}

