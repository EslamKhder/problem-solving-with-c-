#include<bits/stdc++.h>
using namespace std;
int main ()
{
	char arr[1000][1000];
	string value;// LLRRLLLRRR
	cin>>value;
	int row=0,column=0,r=0,l=0,counter=0;
	for(int i=0;i<value.size();i++){
		if(value[i] == 'R'){
			arr[row][column] = value[i];
			r++;
		} else {
			arr[row][column] = value[i];
			l++;
		}
		column++;
		if(r == l && r > 0){
			row++;
			column = 0;
			counter++;
			r = 0;
			l = 0;
		}
	}
	cout<<counter<<endl;
	for(int i=0;i<1000;i++){
		if(arr[i][0] != 'R'&&arr[i][0] != 'L'){
			continue;
		}
		cout<<arr[i]<<endl;
	}
}
