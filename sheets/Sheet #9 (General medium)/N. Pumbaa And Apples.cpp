#include <bits/stdc++.h>
using namespace std;
void FAST(){
    ios_base::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);
}

int main() {
	FAST();
	int row,column,process;
	cin>>row>>column>>process;
	int arr[row+1][column+1];
	for(int i=1;i<=row;i++){
		for(int z=1;z<=column;z++){
			cin>>arr[i][z];
		}
	}
	int arrR[row+1];
	int arrC[column+1];
	for(int i=1;i<=row;i++){ // i = 1 2 3
		arrR[i] = i;
	}
	for(int i=1;i<=column;i++){ // i = 1 2 3
		arrC[i] = i;
	}
	while(process--){ // 5 4 3 2 1
		char c;
		int num1,num2;
		cin>>c>>num1>>num2;
		if(c == 'g'){
			int r = arrR[num1];
			int c = arrC[num2];
			cout<<arr[r][c]<<"\n"; //endl;
		} else if(c == 'r'){
			swap(arrR[num1],arrR[num2]);
		} else if(c == 'c'){
			swap(arrC[num1],arrC[num2]);
		}
	}
	
}
