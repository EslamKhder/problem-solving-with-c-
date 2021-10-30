#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,num;
	cin>>size>>num;
	long long arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	} // [1 ,9 ,8 ,7 ,5,9]
	sort(arr,arr+size);
	reverse(arr,arr+size);
	long long sum = 0;
	for(int i=0;i<num;i++){ // 0 1 
		if(arr[i] < 0){
			break;
		}
		sum += arr[i];
	}
	cout<<sum<<endl;
}
