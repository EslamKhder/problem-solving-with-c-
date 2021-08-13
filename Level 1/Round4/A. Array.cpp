#include<bits/stdc++.h>
using namespace std;
int main()
{
	deque<int> pos;
	deque<int> neg;
	deque<int> zero;
	int size;
	cin>>size;
	for(int i=0;i<size;i++){
		int value;
		cin>>value;
		if(value < 0){
			neg.push_back(value);
		} else if(value > 0){
			pos.push_back(value);
		} else {
			zero.push_back(value);
		}
	}
	if(pos.empty()){
		pos.push_back(neg.at(neg.size() - 1));
		pos.push_back(neg.at(neg.size() - 2));
		neg.erase(neg.begin()+neg.size() - 1);
		neg.erase(neg.begin()+neg.size() - 1);
	}
	if(neg.size() % 2 == 0){
		zero.push_back(neg.at(neg.size() - 1));  
		neg.erase(neg.begin()+neg.size() - 1);
	}
	cout<<neg.size()<<" ";
	for(int i=0;i<neg.size();i++){
		cout<<neg.at(i)<<" ";
	}
	cout<<endl;
	cout<<pos.size()<<" ";
	for(int i=0;i<pos.size();i++){
		cout<<pos.at(i)<<" ";
	}
	cout<<endl;
	cout<<zero.size()<<" ";
	for(int i=0;i<zero.size();i++){
		cout<<zero.at(i)<<" ";
	}
}
