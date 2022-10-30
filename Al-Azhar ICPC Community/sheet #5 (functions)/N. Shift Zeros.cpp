#include<bits/stdc++.h>
using namespace std;
int printCount(int size){
	int counter = 0;
	for(int i=0;i<size;i++){ // 1 5 0 7 4
		int value;
		cin>>value;
		if(value == 0){ 
			counter++;
		} else {
			cout<<value<<" ";
		}
	} // 1 5 7 4   c = 2
	return counter;
}
int main()
{
	int size;
	cin>>size;
	int zeros = printCount(size);
	for(int i=0;i<zeros;i++){ // 0 1 
		cout<<0<<" ";
	}
}
