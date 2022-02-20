#include<bits/stdc++.h>
using namespace std;
void print(int num){ // num = 0
	if(num == 0){
		return;
	}
	cout<<"I love Recursion"<<endl;
	return print(num-1);
}
/*
void print(int num){ //num = 3
	cout<<"I love Recursion"<<endl;
	------------------- return print(num-1); // 2
	void print(int num){ // num = 2
	cout<<"I love Recursion"<<endl;
	------------------- return print(num-1); // num = 1
	void print(int num){ // num = 1
	cout<<"I love Recursion"<<endl;
	------------------- return print(num-1); // num = 0
}
}
}
}
*/
int main()
{
	int num;
	cin>>num;
	print(num);
}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
}
*/
