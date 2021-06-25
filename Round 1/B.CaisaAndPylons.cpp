#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin>>size; // 5
	int hei[size];
	int energy =0;
	int dollers=0;
	for(int i=0;i<size;i++){
		cin>>hei[i];
	}
	dollers = hei[0];
	for(int i =0;i<size-1;i++){
		if(hei[i] > hei[i+1]){
			energy += hei[i] - hei[i+1];
		} else {
			if(energy >= hei[i + 1] - hei[i]){
				energy -= (hei[i + 1] > hei[i]); 
			} else {
				dollers += (hei[i + 1] > hei[i]) - energy;
				energy = 0;
			}
		}
	}
	cout<<dollers<<endl;
	
}
