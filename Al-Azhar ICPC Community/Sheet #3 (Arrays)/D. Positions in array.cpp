#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size; // 5
	cin>>size;
	for(int i=0;i<size;i++){ // 0 1 2 3 4
		int num;
		cin>>num;
		if(num <= 10){
			cout<<"A["<<i<<"] = "<<num<<endl;
		}
	}
}
