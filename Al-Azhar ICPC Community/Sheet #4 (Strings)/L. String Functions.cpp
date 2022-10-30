#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int size,query;
	cin>>size>>query; // 8
	string value;
	cin>>value; // assiutinupperegypt
	string qu;
	int scope1,scope2;
	while(query--){ // 8 7 6 5 4 3 2 1
		cin>>qu;
		if(qu == "pop_back"){
			value.pop_back();
		} else if (qu == "front"){
			cout<<value.front()<<endl;
		} else if (qu == "back"){
			cout<<value.back()<<endl;
		} else if (qu == "sort"){ 
		    //  01 2345 678
			 // ed cvbh dkk
			//  12 3456 789
			cin>>scope1>>scope2;  // 6 3
			sort(value.begin()+ min(scope1,scope2) -1   // 2
			    ,value.begin()+max(scope1,scope2)); // 6
		} else if (qu == "reverse"){
			//  01 2345 678
			 // ed cvbh dkk
			//  12 3456 789
			cin>>scope1>>scope2;  // 6 3
			reverse(value.begin()+ min(scope1,scope2) -1
			    ,value.begin()+max(scope1,scope2));
		} else if (qu == "print"){
			// 01234
			//"eslam"
			// 12345
			int pos ;
			cin>>pos;
			cout<<value[pos - 1]<<endl;
		} else if (qu == "substr"){
			cin>>scope1>>scope2; // 4 1
			for(int i = min(scope1,scope2) - 1;i<=max(scope1,scope2)-1;i++){
				cout<<value[i];
			}
			cout<<endl;
		} else {
			//"bkjf"
			char c;
			cin>>c;
			value.push_back(c);
		}
	}
}
