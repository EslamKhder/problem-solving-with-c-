#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int size;
	cin>>size; // 5
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	// [5,4,3,2,1]
	sort(arr,arr+size);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	
}

