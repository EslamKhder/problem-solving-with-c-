#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin>>size;
	if(size < 26){
		cout<<"NO";
		return 0;
	}
	string word; 
	//  012
	// "AbC"
	// 0123.....................25
	// abcdefgggghijkkkkklmnopqrstuvwxyz
	cin>>word;
	for(int i =0;i<size;i++){// i = 2  i<3   0 1 2
		word[i] =towlower(word[i]);// 
	}
	sort(word.begin(),word.end());
	int counter = 0;
	for(int i=0;i<size;i++){ // 0  24
		if(word[i] != word[i+1]){
			counter++;
		}
	}
	if(counter == 26){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
	
}
