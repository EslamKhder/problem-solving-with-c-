#include<bits/stdc++.h>
using namespace std;
int main(){
	int size,query;//5
	cin>>size>>query;
	int arr[size];
	vector<long long> v;
	map<long long,long long> m;
	for(int i=0;i<size;i++){ // i=2
		cin>>arr[i];// 1
		if(!m[arr[i]]){
			v.push_back(arr[i]);
		}
		m[arr[i]]++; //1
	}
	sort(v.begin(),v.end());
	while(query--){ // 5 4 3 2 1
		int num;
		cin>>num;
		int index = lower_bound(v.begin(),v.end(),num) - v.begin();
		if(m[num]){
			cout<<index<<" "<<v.size()-1-index<<endl;
		} else {
			cout<<index<<" "<<v.size()-index<<endl;
		}
	}
}
