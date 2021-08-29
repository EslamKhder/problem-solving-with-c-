#include<bits/stdc++.h>
using namespace std;
int main()
{
	double discount,price;
	cin>>discount>>price;
	
	double pre = 100 - discount;
	double priceResult = price/pre;
	double result = (discount * priceResult) + price;
	cout<<result<<endl;
}
