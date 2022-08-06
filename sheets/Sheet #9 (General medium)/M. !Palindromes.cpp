#include<bits/stdc++.h>
using namespace std;
int main() {
	string word;
	cin>>word;
	int size = word.size();
	int poi = size -1;
	bool pli = 0;
	for(int i=0;i<size;i++){
		if(word[i] != word[poi]){
			pli = 1;
		}
		poi--;
	}
	if(pli == 1){
		cout<<size;
		return 0;
	}
	
	long long arr[10000]; // 0 99999
	for(int i =0;i<size;i++){
		arr[word[i]]++;
	}
	long long res = 0;
	for(int i ='a';i<='z';i++){
		if(arr[i] > 0){
			res++;
		}
	}
	if(res == 1){
		cout<<0;
	} else {
		cout<<size - 1<<endl;
	}
}
