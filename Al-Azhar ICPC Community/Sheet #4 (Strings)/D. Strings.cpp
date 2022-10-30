#include<bits/stdc++.h>
using namespace std;
int main()
{
	string word1,word2; // cbc   adf    temp = a;
	cin>>word1>>word2;
	cout<<word1.size()<<" "<<word2.size()<<endl;
	string full = word1 + word2; // abccdf
	cout<<full<<endl;
	char temp = word1[0];
	word1[0]=word2[0];
	word2[0] = temp;
	cout<<word1<<" "<<word2<<endl;
}
