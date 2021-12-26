#include<bits/stdc++.h>
using namespace std;
int main() {
   long long num;
   cin>>num;
   bool isPrime = true;
   
   if(num == 0 || num == 1){
   		isPrime = false;
   }
   for(int i=2;i<= sqrt(num);i++){ //
   		if(num % i == 0){
   			isPrime = false;
   			break;
		}
   }
   if(isPrime){
   	cout<<"YES"<<endl;
   } else {
   	   	cout<<"NO"<<endl;
   }
}
