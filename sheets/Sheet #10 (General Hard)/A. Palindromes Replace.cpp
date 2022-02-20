#include<iostream>
#include<string>
using namespace std;
bool check(string word){
	int size = word.size() / 2; // 4 / 2 = 2    0 1 2
	bool res = true;
	for(int i=0,j=word.size()-1;i<size;i++,j--){ // 0  3
		if(word[i] == word[j] || (word[i] == '?' && word[j] !='?') ||
		  (word[i] != '?' && word[j] =='?') || word == "?"){
			res = true;
		} else {
			res = false;
			break;
		}
	}
	return res;
}
int main() {
	string value; //  "?bba" "abb?" "?bb?"
	cin>>value; // 
	int size = value.size() / 2;
	if(value != "?"){ // "?"
		if(check(value)){ // "ab?ba" i =2 j = 2   i <= 2
			for(int i=0,j=value.size()-1;i<=size;i++,j--){
				if(value[i] == '?' && value[j] != '?'){
					value[i] = value[j];
				} else if (value[i] != '?' && value[j] == '?'){
					value[j] = value[i];
				} else if(value[i] == '?' && value[j] == '?'){
					value[i] = 'a';
					value[j] = 'a';
				}
			}
			cout<<value<<endl;
		} else {
			cout<<-1<<endl;
		}
	} else {
		cout<<"a"<<endl;
	}
}
