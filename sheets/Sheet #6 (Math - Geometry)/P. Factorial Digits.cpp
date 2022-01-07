#include <bits/stdc++.h>
using namespace std;
int main() {
	double num,result;
	cin>>num;
	for(int i = 2;i<=num;i++){
		result+= log10(i);
	}
	cout<<"Number of digits of "<<num<<"! is "<<(int)result+1<<endl;
}
