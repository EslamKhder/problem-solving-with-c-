#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row,column;
	cin>>row>>column; // 2 2
	int arr[row][column];
	
	for(int i=0;i<row;i++){ // i = 0 1    i<2
		for(int z=0;z<column;z++){ // z = 0 1
			// i = 0  z = 0  0 0
			// i = 0  z = 1  0 1
			// i = 1  z = 0  1 0
			// i = 1  z = 1  1 1
			cin>>arr[i][z];
		}
	}
	int search;
	cin>>search;
	int flag = 0;
	for(int i=0;i<row;i++){ // i = 0 1    i<2
		for(int z=0;z<column;z++){ // z = 0 1
			if(arr[i][z] == search){
				flag = 1;
				break;
			}
		}
	}
	if(flag == 1){
		cout<<"will not take number"<<endl;
	} else {
		cout<<"will take number"<<endl;
	}
}
