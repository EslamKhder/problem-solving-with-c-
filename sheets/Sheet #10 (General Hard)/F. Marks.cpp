#include <iostream>
using namespace std;
#include<vector>
int main()
{
	int stus,subs;
	cin>>stus>>subs;
	char arr1[stus*subs];
	char arr2[stus*subs];
	for(int i=0;i<stus*subs;i++){
		cin>>arr1[i];
	}
	int ind= 0;
	for(int i=0;i<subs;i++){ // i=0
		int max = arr1[i];
		for(int b=i+subs;b<stus*subs;b++){// b =3 4 5 6 7 8
			if(max < arr1[b] && (b-i) % subs == 0){
				max = arr1[b];
			}
		}
		arr2[ind] = max;
		ind++;
	}
	int best=0;
	for(int z=0;z<stus;z++){ // z=1   z<3
		int x=0;
		for(int i = z*subs;i<(z+1)*subs;i++){ //i = 3     i<6   i++
			if(arr1[i] == arr2[x]){
				best++;
				break;
			}
			x++;
		}
	}
	cout<<best;
	
}
