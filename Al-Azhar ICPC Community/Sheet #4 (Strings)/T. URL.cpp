#include<bits/stdc++.h>
using namespace std;
int main()
{
	string url; // "axc"     ['a','x','c']
	cin>>url;
	int size = url.size();
	for(int i=0;i<size;i++){
		if(url[i] == '?'){
			i++;
			for(int z = i;z<size;z++){  // '&' '='
				if(url[z] == '='){
					cout<<": ";
					continue;
				}
				if(url[z] == '&'){
					cout<<endl;
					continue;
				}
				cout<<url[z];
			}
			break;
		}
	}
}
