#include<bits/stdc++.h>
using namespace std;
int main(){
	int row,column;
	cin>>row>>column;
	char arr[row][column];
	for(int i=0;i<row;i++){
		for(int z=0;z<column;z++){
			cin>>arr[i][z];
		}
	}	
	
	for(int i=0;i<row;i++){
		for(int z=0;z<column;z++){
			if(arr[i][z] == '.'){
				if((i+z) % 2 == 0){
					arr[i][z] = 'W';
				} else {
					arr[i][z] = 'B';
				}
			}
		}
	}	
	for(int i=0;i<row;i++){
		for(int z=0;z<column;z++){
			cout<<arr[i][z];
		}
		cout<<endl;
	}
}
