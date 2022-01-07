#include <bits/stdc++.h>
using namespace std;
int main() {
	double num1,num2,num3;
	cin>>num1>>num2>>num3;
	if(num1+num2 > num3 && num1+num3 > num2 && num2+num3 > num1){
		double sum = num1+num2+num3;
		cout<<"Valid"<<endl;
		cout<<fixed<<setprecision(6)<<sqrt((sum/2) * (sum/2 - num1) * (sum/2 - num2) * (sum/2- num3));
	} else {
		cout<<"Invalid"<<endl;
	}
}
