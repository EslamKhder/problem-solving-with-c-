#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size; // 3
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i]; 
		// 0   1  2
		// 10  -5 -5
		// 5   -3 -2
	}
	bool b = 0;
	for(int i=0;i<size;i++){ // i=0  i= 1  i = 2
		double r1 = (double)arr[i] / 2;
		if(arr[i] % 2 == 0){ // -5 / 2 = -2.5    3  2
			arr[i] = arr[i] / 2;
		} else {
			if(b == 0){
				arr[i] = ceil(r1); // -2.5  = -3
				b = 1;
			} else {
				arr[i] = floor(r1);// -2   = -2
				b = 0;
			}
		}
	}
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl; 
		// 0   1  2
		// 10  -5 -5
		// 5   -3 -2
	}
	
}
