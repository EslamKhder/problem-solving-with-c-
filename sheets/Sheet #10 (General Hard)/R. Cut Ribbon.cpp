#include<bits/stdc++.h>
using namespace std;
int main() {
	int p,n1,n2,n3;
	cin>>p>>n1>>n2>>n3;
	int result =0;
	
	for(int x=0;x<=p;x++){
		for(int z=0;z<=p;z++){
			//5 | 5 3 2
			//n1*x + n2*z + n3*i = p
			int i = (p - n1*x -n2*z) / n3;
			if(i < 0) i = 0;
			if((n1*x) + (n2*z) + (n3*i) == p){
				result = max(result,x+z+i);//2
			}
		}
	}
	cout<<result;
}
