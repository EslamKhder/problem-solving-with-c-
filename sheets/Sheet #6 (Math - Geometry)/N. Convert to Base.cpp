#include <bits/stdc++.h>
using namespace std;
// "101"
long long num(char c){ // 'C'
	if(c >= '0' && c <= '9'){ // '0'   '9'
		return c - '0';
	} else {  
      //  65   66	 67
	 //  'A'   'B'  'C'........... 'Z'
		return c - 'A' + 10; // 2 + 10 = 12
	}
}
char reNum(long long num){ // 'C'
	if(num >= 0 && num <= 9){ // '0'   '9'
		return num + '0';
	} else {  
		return num + 'A' - 10; // 2 + 10 = 12
	}
}
long long toDec(char* value,long long base){ 
	long long size = strlen(value);
	long long power = 1; // 4
	long long result = 0;
	for(int i = size - 1;i>=0;i--){ // i=2    2 1 0
		result += num(value[i]) * power;  // re = 1 * 1 = 1  + 0 = 1 + 4 = 5
		power *= base;
	}

	return result;
}
char * fromDec(char res[],long long base,long long number){
	int index=0; // 1
	while(number > 0){
		res[index++] = reNum(number % base);
		number /= base;
	} // 0 1 2 3
	res[index] = '\0';
	reverse(res,res+index);
	return res;
}
int main() {
	
	// '0'   '1'   '2'   3  4   5   ....... 9
	// 48     49   50   51 52  53  .......
	int ca;
	cin>>ca;
	if(ca == 1){
		char arr[35] ={""};
		cin>>arr;
		long long base;
		cin>>base;
		cout<<toDec(arr,base);
	} else {
		long long number,base;
		cin>>number>>base;
		char res[100];
		cout<<fromDec(res,base,number);
	}
	
}
