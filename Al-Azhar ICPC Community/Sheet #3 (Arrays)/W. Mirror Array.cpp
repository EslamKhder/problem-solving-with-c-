#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,sizeArr; //  3 3
	cin>>size>>sizeArr;
	while(size--){ // 3 2 1
		int arr[sizeArr]; // arr[3]
		for(int i=0;i<sizeArr;i++){ // 0 1 2
			cin>>arr[i];
		}
		for(int i=sizeArr-1;i>=0;i--){ // 2 1 0
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}
