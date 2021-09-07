#include<bits/stdc++.h>
using namespace std;
int main()
{
	int number;
	cin>>number;
	for(int i=1;i<=number;i++){ // 1 2 3 4 5 6
		if(number % i == 0){
			cout<<i<<endl;
		}
	}
}
