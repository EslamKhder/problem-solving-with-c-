#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int super,kilos;
	cin>>super>>kilos;
	double finishKilo;
	for(int i=0;i<super;i++){
		
		double kilo,price;
		cin>>kilo>>price;
		double res = kilo/price;
		if(i == 0){
			finishKilo = res;
			continue;
		}
		if(res < finishKilo){
			finishKilo = res;
		}
	}
	cout<<setprecision(9)<<finishKilo * kilos<<endl;
}
