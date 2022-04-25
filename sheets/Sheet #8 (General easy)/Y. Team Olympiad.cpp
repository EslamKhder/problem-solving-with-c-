#include<iostream>
using namespace std;
#include<algorithm> 
#include<vector>
int arr1[50001];
int arr2[50001];
int arr3[50001];
int main()
{
	int size; // 7
	cin>>size;
	int a1=0,a2=0,a3=0;
	for(int i=1;i<=size;i++){ // 1 2 3 4 5 6 7
		int num;
		cin>>num; // 1 3 1 3 2 1 2
		if(num == 1){
			 arr1[a1] = i; // 3
			 a1++;//0 1 2 3
		} else if (num == 2){
			arr2[a2] = i; // 2
			a2++;// 0 1 2
		} else {
			arr3[a3] = i; // 2
			a3++; // 0 1 2
		}
	}
	int team = min(a1,min(a2,a3));
	cout<<team<<endl; //  2
	for(int i=0;i<team;i++){ // 0 1
		cout<<arr1[i]<<" "<<arr2[i]<<" "<<arr3[i]<<endl;
	}
}
