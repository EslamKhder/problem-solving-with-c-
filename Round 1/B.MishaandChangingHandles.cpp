#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin>>size;
	map<string,string> emails;
	map<string,string> finalEmails;
	for(int i=0;i<size;i++){
		string fMail,lMail;
		cin>>fMail>>lMail;
		emails[fMail] = lMail;
	}
	
	map<string,string>::iterator it;
    for(it=emails.begin(); it!=emails.end(); ++it){
    	//string email = emails[it->second];
    	if(emails[it->second] != ""){
    		cout<<(emails[it->second] != "")<<endl;
    		finalEmails[it->first] = emails[it->second];
		}

    }
    cout<<finalEmails.size()<<endl;
	
}
