#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long size,counter=0,poi1=0,poi2=0;
	int swap=0;
	cin>>size;
	long long arr1[size],arr2[size];
	for(int i=0;i<size;i++){
		cin>>arr1[i];
		arr2[i] = arr1[i];
	}
	sort(arr2,arr2+size);
	for(int i=0;i<size;i++){
		if(arr1[i] == arr2[i]){
			counter++;
		}
	}
	if(counter == size){
		cout<<"yes"<<endl;
		cout<<"1 1"<<endl;
		return 0;
	}
	for(int i=0;i<size-1,swap<1;){
		if(arr1[i] < arr1[i+1]){
			i++;
		} else {
			poi1 = i;
			poi2 = i;
			while(arr1[i] > arr1[i+1] && i<size-1){
				poi2++;
				i++;
			}
			// 3 2 1    poi1 = 0    poi2 = 2
			sort(arr1+poi1,arr1+poi2+1);
			swap = 1;
		}
	}
	for(int i=0;i<size;i++){
		if(arr1[i] != arr2[i]){
			cout<<"no"<<endl;
			return 0;
		}
	}
	
	cout<<"yes"<<endl;
	cout<<poi1 + 1<<" "<<poi2 + 1<<endl;
	
	
}
