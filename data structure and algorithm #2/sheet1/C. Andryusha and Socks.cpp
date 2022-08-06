#include<bits/stdc++.h>
using namespace std;
int main(){
	int sockSize; // 2  
	cin>>sockSize;
	if(sockSize == 1){
		int s1,s2;
		cin>>s1>>s2;
		cout<<1;
		return 0;
	}
	int arr[sockSize+1] = {0};
	int table_po=0,counter=0;
	for(int i=0;i<sockSize*2;i++){  // 0 1 2 3
		int so;
		cin>>so;
		if(arr[so] == 0){
			arr[so]++;
			table_po++;
			counter = max(table_po,counter);
		} else {
			table_po--;
		}
	}
	cout<<counter<<endl;
}
