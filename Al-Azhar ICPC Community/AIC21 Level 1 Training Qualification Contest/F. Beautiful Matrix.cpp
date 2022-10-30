#include<bits/stdc++.h>
using namespace std;
int main()
{
  int size,ans;
  cin>>size;
  int arr[size][size];
  for(int i=0;i<size;i++){
  	for(int z=0;z<size;z++){
  		cin>>arr[i][z];
	}
  }
  for(int i=0;i<size;i++){ // i = 0
  	vector<long long> rowIn; // 1 2 3
  	long long cou = 0;
  	for(int z=0;z<size;z++){ // z = 0  0 1 2     z<3
  		rowIn.push_back(arr[i][z]); // 0,0   0,1  0,2
  	}
  	for(int x=0;x<size;x++){// x = 0;  x<3    0 1 2
	  	for(int y=0;y<size;y++){ // y=0 y<3   0 1 2
	  	// 0 0    0 1   0 2
	  		if(rowIn[y] == arr[y][x]){// 0,2 1,2  2,2
	  			cou++;
			}
		}
		if(cou == size){
			ans++;
		}
		cou = 0;
	  }
  }
  cout<<ans;
}
