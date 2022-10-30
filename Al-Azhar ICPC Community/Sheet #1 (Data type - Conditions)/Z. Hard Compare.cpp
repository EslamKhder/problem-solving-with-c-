#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	/*    
	     2^5        3^6
		log(2^5)   log(3^6)
		5log(2)    6log(3)
	*/
	double num1,num2,num3,num4;
	cin>>num1>>num2>>num3>>num4;
	double res1 = num2*log(num1);
	double res2 = num4*log(num3);
	if(res1 > res2){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}
