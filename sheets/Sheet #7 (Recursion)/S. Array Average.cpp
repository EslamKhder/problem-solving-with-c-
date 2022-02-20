#include<bits/stdc++.h>
using namespace std;
double arr[100];
int size;
// 5
// 0 1 2 3 4
// 5 4 6 9 2
double av(int index,double res){ // 0  0
	
	if(size == index){
		return res/size;
	}
	return av(index+1,res+arr[index]); // 4  20
}
int main(){
	cin>>size;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	cout<<fixed<<setprecision(6)<<av(0,0); //  .0000
}
