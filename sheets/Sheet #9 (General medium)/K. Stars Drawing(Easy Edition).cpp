#include<bits/stdc++.h>
using namespace std;
const int size=1e3; // //10^3
char arr[size][size];
int visit[size][size];
vector<pair<pair<int,int>,int> > res;
int n,m;
void add(int row, int column,int moves){
	int colMove = column+moves;//4+1=5
	int col = column;//4
	while(col<=colMove){//4<=5 4 5
		visit[row][col] = 1;
		col++;
	}
	colMove = column-moves;//4-1=3
	col = column;//4
	while(col>=colMove){//4>=3 4 3
		visit[row][col] = 1;
		col--;
	}
	int rowMove = row+moves;//3+1 = 4
	int ro = row;//3
	while(ro<=rowMove){//3<=4 3 4
		visit[ro][column] = 1;
		ro++;
	}
	
	rowMove = row-moves;//3+1 = 2
	ro = row;//3
	while(ro>=rowMove){//3>=2 3 2
		visit[ro][column] = 1;
		ro--;
	}
	
}
int checkStarts(int row,int column){
	int right=0,left=0,upper=0,lower =0;
	int col = column;
	while(col<=m && arr[row][col] == '*'){// 4 5 6 7 8
		right++;
		col++;
	}
	
	col = column;
	while(col>=1 && arr[row][col] == '*'){// 4 5 6 7 8
		left++;
		col--;
	}
	int ro = row;
	while(ro>=1&&arr[ro][column] == '*'){
		upper++;
		ro--;
	}
	ro = row;
	while(ro<=n&&arr[ro][column] == '*'){
		lower++;
		ro++;
	}
	//   5 4 3 2
	//    4  2    2
	return min(min(left-1,right-1),min(upper-1,lower-1));
}
int main() {
	cin>>n>>m; // 6 8
	for(int i=1;i<=n;i++){
		// i = 1  i<=6
		for(int z=1;z<=m;z++){
		// z=1  z<=8
			cin>>arr[i][z];
		}
	}
	for(int i=1;i<=n;i++){
		// i = 1  i<=6
		for(int z=1;z<=m;z++){
		// z=1  z<=8
			if(arr[i][z] == '*'){
				int stars = checkStarts(i,z);
				if(stars > 0){
					res.push_back({{i,z},stars});
					add(i,z,stars);
				}
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int z=1;z<=m;z++){
			if(arr[i][z] == '*'){
				if(visit[i][z] != 1){
					cout<<-1;
					return 0;
				}
			}
		}
	}
	cout<<res.size()<<endl;
	for(int i=0;i<res.size();i++){
		cout<<res[i].first.first<<" "<<res[i].first.second<<" "<<res[i].second<<endl;
	}
}

