#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size,squ;
	cin>>size>>squ;
	int min;
	int flag = 1;
	int counter = 0;
	for(int i=1;i<=size;i++){
		int value;
		cin>>value;
		if(flag){
			min = value;
			flag = 0;
		} else {
			if(value < min){
				min = value;
			}
		}
		counter++; // 3
		if(counter == squ || i == size){
			cout<<min<<" ";
			counter = 0;
			flag = 1;
		}
	}
}
