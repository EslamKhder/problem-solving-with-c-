#include<bits/stdc++.h>
using namespace std;
int main() {
	long long line;//4
	cin>>line;
	int value;
	for(int i=0;i<line;i++){ // 0 1 2
		value = 1;
		for(int z =0;z<=i;z++){ //   0 1 2  z<=2
			cout<<value<<" ";
			value = value * (i - z) / (z + 1); // 1 * (2 - 0) / (0 + 1)
		}
		cout<<endl;
	}
}
