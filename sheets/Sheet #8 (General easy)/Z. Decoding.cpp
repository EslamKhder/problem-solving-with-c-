#include<iostream>
using namespace std ;
int main() 
{
	int size; // 5
	string word; 
	//  01234
	// "logva"
	cin>>size>>word;
	string result = "";
	int i = 0;
	while(size){ // 5 4 3 2 1
		if(size % 2 == 0){ // even
			result = word[i] + result;
		} else { // odd
			result =  result + word[i];
		}
		i++;
		size--;
	}
	cout<<result;
}
