#include<bits/stdc++.h>
using namespace std;
int main() {
	int testCases; // 4
	cin>>testCases;
	while(testCases--){ // 4 3 2 1
		int arr[4];
		cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];// 14 9 2 5
		map<int,string> run;
		run.insert(pair<int,string>(arr[0],"Hussien")); // 14 : Hussien
		run.insert(pair<int,string>(arr[1],"Atef"));// 9 : Atef
		run.insert(pair<int,string>(arr[2],"Karemo"));// 2 : Karemo
		run.insert(pair<int,string>(arr[3],"Ezzat"));// 5 : Ezzat
		sort(arr,arr+4);
		//  0 1 2 3
		//  2 5 9 14
		map<int,string>::iterator it1 = run.find(arr[3]);
		map<int,string>::iterator it2 = run.find(arr[2]);
		cout<<it1->second<<" "<<it2->second<<endl;
	}
}
