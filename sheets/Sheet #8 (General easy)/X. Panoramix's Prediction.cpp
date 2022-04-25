//Problem X
#include<iostream>
using namespace std ;
// 
bool isPrime(int num){ // 0 1
	if(num == 0 || num == 1)
	  	return false;
	for(int i=2;i<=num/2;i++){
		if(num % i == 0){
			return false;
		}
	}
	return true;
}
int nextPrime(int num){ // 3 
	if(num <= 1){
		return 2;
	}
	bool found = false;
	int primeNumber = num; // 3
	while(!found){ // true
		primeNumber++; // 5
		if(isPrime(primeNumber)){
			found = true;
		}
	}
	return primeNumber;
}
int main() 
{
	int num1,num2; // 3 5
	cin>>num1>>num2;
	if(nextPrime(num1) == num2){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}
