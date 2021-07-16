#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[1000000];
int main(){
	int size;
	cin>>size; // 2     [5,6]      [  ,  ,  ,  , 1 ,  ,  ,,,,,,,,]   ind 5 = 1
	long long start = 0;
	long long end = 0;
	for(int i=0;i<size;i++){
		int val;
		cin>>val;
		arr[val] = i + 1;
	}
	int sizeSearch;
	cin>>sizeSearch;
	for(int i=0;i<sizeSearch;i++){
		int search;
		cin>>search;
		start += arr[search];
		end += size - arr[search] + 1;
	}
	cout<<start<<" "<<end<<endl;
}
