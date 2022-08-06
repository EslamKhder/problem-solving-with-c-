#include<bits/stdc++.h>
using namespace std;
int main(){
	long long r,c,process,sum,n1,n2,n3,n4;
	cin>>r>>c>>process;
	long long arr1[r+1][c+1],arr2[r*c+1];
	arr1[0][0] = 0;
	arr2[0] = 0;
	int po = 1;
	for(int i=1;i<=r;i++){
		for(int z=1;z<=c;z++){
			cin>>arr1[i][z];
			arr2[po] = arr2[po-1] + arr1[i][z];
			po++;
		}
	}
	/*for(int i=1;i<=r*c;i++){
			cout<<arr2[i]<<" ";
			if(i % 5 == 0){
				cout<<endl;
			}
	}*/
	
	while(process--){
		sum = 0;
		cin>>n1>>n2>>n3>>n4;
		if(n1 == 1 && n2 == 1){
			cout<<arr2[n3*n4-r+n3]<<endl;
		} else {
			cout<<arr2[(n3-1)*r+n4] - arr2[(n1-1)*r+n2-1]<<endl;
			
		}
	}
}
