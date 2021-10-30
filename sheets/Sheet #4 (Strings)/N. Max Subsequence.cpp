#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size; // 5
	string value; 
	// 01234
	// aaaac
	cin>>value;
	char temp;
	int counter = 0;
	for(int i=0;i<size;i++){ // 0 1 2 3 4      i = 2
		if(i == 0){
			temp = value[i];
			counter++;
		} else {
			if(value[i] != temp){
				counter++;
				temp = value[i];
			}
		}
	}
	cout<<counter;
}
