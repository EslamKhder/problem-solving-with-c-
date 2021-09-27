#include<bits/stdc++.h>
using namespace std;
int main()
{
	int counter;
	cin>>counter; // 2
	while(counter--){ // 2 1 0
		int size;
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++){
			cin>>arr[i];
			cout<<arr[i]<<" ";
		}
		int i=0;
		int z = 0;
		int ma;
		while(true){       // [1,6,3,7]    // size = 4   4 - 1 = 3
			if(z == size - 1){
				break;
			}
			if(i == z){
				ma = max(arr[i],arr[i+1]);	// 6
			} else {
				ma = max(ma,arr[i+1]); // 6 3
			}
			cout<<ma<<" ";
			i++; // 1
			if(i == size - 1){
				z++;
				i=z;
			}
		}
		cout<<endl;
	}
}
