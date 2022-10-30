#include<bits/stdc++.h>
using namespace std;
int main(){
	 string value;
	 cin>>value;
	 vector<long long> pref(value.size());
	 if(value[0] == 'a')
	 	pref[0] = 1;
	 else 
	 	pref[0] = 0;
	for(int i = 1;i<value.size();i++){
		if(value[i] == 'a'){
			pref[i] += pref[i-1] + 1;
		} else {
			pref[i] += pref[i-1];
		}
	}
	int cases; // 6
	cin>>cases;
	
	while(cases--){ // 6 5 4 3 2 1 0
		int s,e;
		cin>>s>>e;
		if(s == 1){
			cout<<pref[e-1]<<endl;
		} else {
			cout<<pref[e-1] - pref[s-2]<<endl;
		}
	}
}
