#include<bits/stdc++.h>
using namespace std;
double sum(int size){
	double sum;
	for(int i=0;i<size;i++){ // 0 1 2
		double value;
		cin>>value;
		sum+= value;
	}
	return sum;
}
int main()
{
	int size;
	cin>>size;
	cout<<setprecision(8)<<sum(size)/size<<endl;
}
