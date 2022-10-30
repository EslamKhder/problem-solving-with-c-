#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n1,n2,c=1;
	cin>>n1>>n2;
	long long arr[n1];
	for(int i=0;i<n1;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n1;i++){
		for(int z=i+1;z<n1;z++){
			if(abs(arr[i] - arr [z]) == n2){
				c++;
			}
		}
	}
	c*=2;
	cout<<c<<endl;
	
}
