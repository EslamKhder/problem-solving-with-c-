#include<bits/stdc++.h>
using namespace std;
int main() {
	int row,column;
	cin>>row>>column;
	int flag = 0;
	for(int i=0;i<row;i++){
		for(int z=0;z<column;z++){
			char color;
			cin>>color;
			if(color == 'C' || color == 'M' || color == 'Y'){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			break;
		}
	}
	if(flag == 1){
		cout<<"#Color"<<endl;
	} else {
		cout<<"#Black&White"<<endl;
	}
}
