#include<bits/stdc++.h>
using namespace std;
bool prime(int num){ // true false   1  0	       8     1 8
 int newNumber = sqrt(num); // 4  //   4 3 2 
 int flag = 0;
 for(int i = 2;i<= newNumber;i++){
 	if(num % i == 0){
 		flag = 1;
 		break;
	 }
 }
 return flag;
}
int main(){
	int size;
	cin>>size;  // 3
	while(size--){  //  3  2  1  0
		int num;
		cin>>num;
		if(num == 1){
			cout<<"NO"<<endl;
			continue;
		}
		int pr = prime(num);
		if(pr == 1){
			cout<<"NO"<<endl;
		} else {
			cout<<"YES"<<endl;
		}
	}
	
}
