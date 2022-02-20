#include <iostream>
using namespace std;
#include<stack>
int main(){
	string s1,s2; // codeforc y
	cin>>s1>>s2;
	stack<char> st1; // [t,,,]
	stack<char> st2; // [w,,,]
	for(int i=0;i<s1.size();i++){
		st1.push(s1[i]);
	}
	for(int i=0;i<s2.size();i++){
		st2.push(s2[i]);
	}
	while(!st1.empty() && !st2.empty()){
		if(st1.top() != st2.top()){
			break;
		}
		st1.pop();
		st2.pop();
	}
	cout<<st1.size() + st2.size()<<endl;
}
