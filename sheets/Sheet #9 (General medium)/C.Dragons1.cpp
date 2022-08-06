#include<bits/stdc++.h>
using namespace std;
int main() {
	// vector   pair
	vector<pair<int, int> > dr;
	long long initEn,num,enD,accEn;
	cin>>initEn>>num; // 3
	for(int i=0;i<num;i++){ // 3 2 1  0
		cin>>enD>>accEn;
		 dr.push_back(make_pair(enD,accEn));
	}
	sort(dr.begin(),dr.end());
	// vec1<pair>[] =[{10,5},{20,10},{100,100}]
	bool res = 1;
	for(int i=0;i<num;i++){ // 0  3
		if(initEn > dr[i].first){
			initEn+= dr[i].second;
		} else {
			res = 0;
			break;
		}
	}
	if(res == 1){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
	
}
