#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n) // 11     2 ------> sqrt(11)
{
	if(n <= 1){ //
		return 0;
	}
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 /*
 3 2
1 4 3
2 2 1
*/
int main(){
	int size,x,opr,res=0;
	cin>>size>>x;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	for(int i=0;i<size;i++){
		cin>>opr;
		if(opr == 1){
			if(isPrime(arr[i]) == 1){
				/*res = pow(5,x) * pow(3,x);
				cout<<res%10<<" ";  // 247 % 10 = 7   */ 
				if(arr[i] % 2 == 0){  // 3% 2 == 0
					cout<<0<<" ";
				} else {
					cout<<5<<" "; // 5
				}
			} else {
				cout<<-1<<" ";
			}
		} else {
			/*res = pow(2,x) * pow(5,x);
			cout<<res%10<<" ";  //*/
			cout<<0<<" ";
		}
	}
}
