#include<bits/stdc++.h>
using namespace std;
int main() {
	long long num;
	cin>>num;
	for(long long i=1;;i++){
		if(i > num){
			cout<<i-1;
			return 0;
		} else {
			num -= i;
		}
	}
}
