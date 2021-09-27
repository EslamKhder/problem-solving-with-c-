#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCases,result = 0,flag = 1,min; // 5
	cin>>testCases;
	while(testCases--){ // 5 4 3 2 1 0
		int size; // 4
		cin>>size;
		int arr[size]; // arr[4]
		for(int i=0;i<size;i++){ // 0 1 2 3
			cin>>arr[i];
		}
		for(int z=1;z<=size;z++){ // (1,2)   (1,3)  (1,4)
			for(int x=z+1;x<=size;x++){
				result = (arr[z-1] + arr[x-1]) + (x-z);
				if(flag == 0 && min > result){
					min = result;
				}
				if(flag){ //1
					min = result;
					flag = 0; // 0
				}
				result = 0;
			}
		}
		flag = 1;
		cout<<min<<endl;
	}
	
}
