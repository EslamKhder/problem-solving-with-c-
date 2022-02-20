#include<bits/stdc++.h>
using namespace std;
int size; // 5
int num;
int MaxNum;
void print(int counter){ // 0 1 2 3 4 5
	cin>>num;
	if(counter == size){
		return;
	}
		if(counter == 0){
			cout<<num<<" ";
			MaxNum = num;
		} else {
			if(MaxNum < num){
				cout<<num<<" ";
				MaxNum = num;
			} else {
				cout<<MaxNum<<" ";
			}
		}
		return print(counter+1);
}
int main()
{
	
	cin>>size;
	print(0);
}
