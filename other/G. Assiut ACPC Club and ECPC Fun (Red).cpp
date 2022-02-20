#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int op;
	cin>>op;
	for(int z=0;z<op;z++){
		int n1,n2;
		cin>>n1>>n2;
			for(int x=0;x<size;x++){
				if((arr[x]>=n1 && arr[x]<=n2)){
					arr[x] = -1;
				}
			}
	}
	int temp =-1;
	int arrF[size];
	int counter = 0;
	int ind = 0;
	for(int i=0;i<size;i++){
		if(arr[i] != -1 && temp != arr[i]){
			counter++;
			temp = arr[i];
			arrF[ind++] = arr[i];
		}
	}
	cout<<counter<<endl;
	for(int i=0;i<ind;i++){
		cout<<arrF[i]<<" ";
	}
}
