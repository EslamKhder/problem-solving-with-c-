#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
int main(){
	long long size,aus;
	long long res;
	cin>>size>>aus;
	long long arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	long long num;
	for(int i=0;i<size;i++){
		long long flag = 0;
		cin>>num;
		if(num == 1){
			if(isPrime(arr[i]) == 1){
				res = pow(15,aus) * arr[i];
			} else {
				cout<<-1<<endl;
				flag = 1;
			}
		} else {
			res = pow(10,aus) * arr[i];
		}
		if(flag == 0){
			cout<<res %10<<" ";
		}
		
	}
}
