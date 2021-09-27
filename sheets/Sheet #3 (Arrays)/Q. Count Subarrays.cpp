#include<bits/stdc++.h>
using namespace std;
int main()
{
	int counter;
	cin>>counter; // 2
	while(counter--){ // 2 1
		int size;
		int result = 0;
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++){
			cin>>arr[i];
		}
		result = size;
		int i = 0;
		int z = 0;
		while(true){
			if(z == size - 1){
				break;
			}
			if(arr[i] > arr[i+1]){
				z++;
				i=z;
				continue;
			}
			result++;
			i++;
			if(i == size - 1){
				z++;
				i = z;
			}
		}
		cout<<result<<endl;
	}
}
