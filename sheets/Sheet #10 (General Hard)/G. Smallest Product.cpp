#include <bits/stdc++.h>
using namespace std ;
int main(){
	long long size;
	cin>>size;
	double sum = 0;
	for(int i=0;i<size;i++){
		long long product;
		cin>>product;
		sum+=log10(product);
	}
	double res = sum/size;
	cout<<(long long)pow(10,res)+1;
}
