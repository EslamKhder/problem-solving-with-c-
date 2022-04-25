#include<bits/stdc++.h>
using namespace std;
int main() //
{
	int row,col;
	cin>>row>>col; // 3 4
	int arr1[row] = {0},arr2[col] = {0}; 
	// 1 0 1   // 1 0 1 0     c = 8
	for(int i=0;i<row;i++){ // 2
		string line; 
		//  0123
		// "S..."
		// "...."
       //  "..S."
		cin>>line;
		for(int z=0;z<col;z++){ // 2
			if(line[z] == 'S'){
				arr1[i] = 1;
				arr2[z] = 1;
			}
		}
	}
	int ca = 0;
	for(int i=0;i<row;i++){
		for(int z=0;z<col;z++){
			if(arr1[i] == 0 || arr2[z] == 0){
				ca++;
			}
		}
	}
	cout<<ca<<endl;
}
