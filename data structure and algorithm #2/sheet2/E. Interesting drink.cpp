#include<bits/stdc++.h>
using namespace std;
int main(){
	
	long long shops,days,c;
	cin>>shops;
	vector<long long> cost(shops);
	for(int i=0;i<shops;i++){
		cin>>cost[i];
	}
	sort(cost.begin(),cost.end());
	cin>>days;
	while(days--){
		cin>>c;
		cout<<upper_bound(cost.begin(),cost.end(),c) - cost.begin() <<endl;
	}
	
}
