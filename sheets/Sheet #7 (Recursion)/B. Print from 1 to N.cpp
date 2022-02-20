#include<bits/stdc++.h>
using namespace std;
int counter = 1; // 1 
void print(int num){ // 5
	if(num == 0){
		return;
	}
	            // 1 2 3 4 5
	cout<<counter++<<endl; //     ++counter    counter++
	
	return print(num - 1); // 4
}
int main()
{
	int num;
	cin>>num;
	print(num);	
}
