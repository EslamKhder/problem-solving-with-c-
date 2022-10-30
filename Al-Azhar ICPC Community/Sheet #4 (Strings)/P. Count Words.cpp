#include<bits/stdc++.h>
using namespace std;
int main ()
{
	string sen,res; 
    // 0123456789
	// Meep Meep!
	// res = "l";
	int counter = 0;
	getline(cin,sen);
	for(int i=0;i<sen.size();i++){ // "d fffv!oop l"
		if(sen[i] != 32& sen[i] != '!' && sen[i] != '.' && sen[i] != '?' && sen[i] != ','){
			res+=sen[i];
		}
		if((sen[i] == 32 || sen[i] == '!' || sen[i] == '.' || sen[i] =='?' || sen[i] == ',' || i == sen.size() - 1)
		   && res.size() != 0){
			counter++;
			res = "";
		}
	}
	cout<<counter<<endl;
    return 0;
}
