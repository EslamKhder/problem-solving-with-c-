#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	map<string,string> m;
	int size;
	cin>>size;
	int flag = 1;
	for(int i=0;i<size;i++){
		string name,email;
		cin>>name>>email;
		map<string,string>::iterator it;
		for(it=m.begin();it !=m.end();it++){
			if(name == it->second){
				m[it->first] = email;
				flag = 0;
			}
			//cout<<it->first<<" "<<it->second<<endl;
		}
		if(flag){
			m[name] = email;
		}
		flag = 1;
	}
	cout<<m.size()<<endl;
	map<string,string>::iterator it;
	for(it=m.begin();it !=m.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	
    
}
/*


*/
