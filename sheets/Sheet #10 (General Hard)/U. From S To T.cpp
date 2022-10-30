#include<bits/stdc++.h>
using namespace std;
bool check(string s1,string s2){
	if(s1.size() > s2.size()) return false;
	
	/*
		s1 = av
		s2 = acxb
	*/
	
	int ind = 0; // 1
	for(int i=0;i<s2.size();i++){ // 3
		if(s1[ind] == s2[i]) ind++;
		if(ind == s1.size()) return true;
	}
	return false;
}
void solve(){
	string s1,s2,s3;
		cin>>s1>>s2>>s3;
		if(check(s1,s2)){
			map<char,int> m1;
			map<char,int> m2;
			
			for(int i=0;i<s1.size();i++){
				m1[s1[i]]++;
			}
			for(int i=0;i<s2.size();i++){
				m2[s2[i]]++;
			}
			for(int i=0;i<s3.size();i++){
				m1[s3[i]]++;
			}
			
			map<char, int>::iterator itr;
			for(itr = m2.begin(); itr != m2.end(); ++itr){	
				char f = itr->first;//b
				int s = itr->second;//1
				
				if(m1[f] < s){
					cout<<"NO"<<endl;
					return;
				}
			}
			cout<<"YES"<<endl;
			
		} else {
			cout<<"NO"<<endl;
		}
}
int main () {
	
	int cases; // 4
	cin>>cases;
	while(cases--){ // 4 3 2 1
		solve();
	}
}


