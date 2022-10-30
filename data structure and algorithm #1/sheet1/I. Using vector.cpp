#include<bits/stdc++.h>
using namespace std;
int main(){
	int size,q;
	cin>>size>>q;
	vector<long long> v(size); // 8 7 6 5 4 3
	for(int i=0;i<size;i++){
		cin>>v[i];
	}
	
	
	while(q--){ 
		// 0 1 2 3 4 5 6
		// 7 6 5 9 3 2 1
		string qu;
		cin>>qu;
		if(qu == "pop_back"){
			v.pop_back();
		} else if (qu == "front"){
			cout<<v.front()<<endl;
		} else if (qu == "back"){
			cout<<v.back()<<endl;
		} else if (qu == "sort"){
			int s,e; // 3  5
			cin>>s>>e;
			s--;
			sort(v.begin()+s,v.begin()+e);
		} else if (qu == "reverse"){
			int s,e; // 3  5
			cin>>s>>e;
			s--;
			reverse(v.begin()+s,v.begin()+e);
		} else if (qu == "print"){
			int pos; // 4
			cin>>pos;
			cout<<v[--pos]<<endl; // --pos   pos--
		} else {
			int num;//3
			cin>>num;
			v.push_back(num);
		}
	}
}
