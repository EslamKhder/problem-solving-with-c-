#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size;
	double sum = 0.0;
	double result = 0.0;
	for(int i=0;i<size;i++){
		int value;
		cin>>value;
		sum+=value;
	}
	result = sum / size;
	
	cout<<fixed<<setprecision(12)<<result<<endl;
}
