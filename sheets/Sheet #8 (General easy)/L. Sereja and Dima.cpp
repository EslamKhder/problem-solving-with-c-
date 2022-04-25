#include<bits/stdc++.h>
using namespace std;
int main() //
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int start = 0,end = size-1,r1=0,r2=0,max=0,play = 0;//1
	while(start<=end){
		if(arr[start] >= arr[end]){
			max = arr[start];
			start++;
		} else {
			max = arr[end];	
			end--;
		}
		if(play % 2 == 0){
			r1+=max;
		} else {
			r2+=max;
		}
		play++;
	}
	cout<<r1<<" "<<r2<<endl;
}
