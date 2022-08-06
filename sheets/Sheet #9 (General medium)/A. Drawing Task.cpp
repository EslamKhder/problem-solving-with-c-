#include<iostream>
using namespace std;
int main()
{
	int row,column,process;// 3 
	cin>>row>>column>>process;
	char arr[row][column];
	for(int i=0;i<row;i++){
		for(int z=0;z<column;z++){
			arr[i][z] = '.';
		}
	}
	while(process--){ // 3 2 1
		int r1,c1,r2,c2;
		char c;
		cin>>r1>>c1>>r2>>c2>>c;
		// i = 0  i<=1  0 1
		for(int i=min(r1,r2)-1;i<=max(r1,r2)-1;i++){
			for(int z=min(c1,c2)-1;z<=max(c1,c2)-1;z++){
				arr[i][z] = c;
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
