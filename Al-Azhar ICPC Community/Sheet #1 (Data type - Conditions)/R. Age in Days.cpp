#include<iostream>
using namespace std;
int main() {
	int inputDays; 
	cin>>inputDays; // 5
	int year = inputDays / 365; // 400 / 365 = 1    35
	inputDays -= 365 * year; // inputDays = inputDays -( 365 * year);
	int monuths = inputDays / 30;  // 35   30   1   5
	inputDays -= 30 * monuths;
	cout<<year<<" years"<<endl;
	cout<<monuths<<" months"<<endl;
	cout<<inputDays<<" days"<<endl;
	
}
