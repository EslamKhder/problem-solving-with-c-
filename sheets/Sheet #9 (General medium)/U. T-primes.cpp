#include<bits/stdc++.h>
using namespace std;
long long arr[1000001] = {0};
int main()
{
	//  0 1 2 3 4 5 6 7 8 9 10 
	// [0 1 0 0 1 0 1 0 1 1 1]
	arr[1] = 1;
	for(long long i=2;i<= 1000;i++){ // i = 4  i<= 1000 ;i++
		for(long long z=2*i;z<=1000000;z+=i){//z=2*3=6   z<=1000000 z+=i
			arr[z] = 1;
		}
	}
	int size;
	cin>>size;
	while(size--){
		long long num;
		cin>>num; // 4   
		long long sq = sqrt(num); // 2
		if((sq * sq) == num && arr[sq] == 0){
			cout<<"YES\n";
		} else {
			cout<<"NO\n";
		}
		
	}
}
