#include<bits/stdc++.h>
using namespace std;
int main(){
	int size,team;
	cin>>size>>team;
	long long students[size];
	vector<long long> studentTemp;
	map<long long,long long> m;
	for(int i=0;i<size;i++){//4
		cin>>students[i];
		if(!m[students[i]]){
			studentTemp.push_back(i+1);
		}
		m[students[i]]++;
	}
	if(studentTemp.size() >= team){
		cout<<"YES"<<endl;
		for(int i=0;i<team;i++){
			cout<<studentTemp[i]<<" ";			
		}
	} else {
		cout<<"NO"<<endl;
	}
}
