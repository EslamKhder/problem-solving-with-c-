#include<iostream>
using namespace std ;
int main (){
	string num; 
	//  012
	// "927"
	//
	cin>>num;
	long long size = num.size(); // 3
	char result[size]; // [9,]
	for(int i=0;i<num.size();i++){ // 0 1 2
		if(i == 0 && num[i] == '9'){ // '9'
			result[i] = num[i];
		} else if(num[i] >= '5') { 
		// '7' >= '5'
		// 55 >= 53
			// 0    1    2     3    4      5    6    7     8    9
			//'0'  '1'   '2'   '3'  '4'   '5'  '6'  '7'   '8'  '9'
			//48    49   50     51 ...................
			result[i] = '9' - num[i]  + '0';// '2' // 57 - 55 = 2 + '0'
		} else {
			result[i] = num[i];
		}
	}
	for(int i=0;i<size;i++){
		cout<<result[i];
	}
}
