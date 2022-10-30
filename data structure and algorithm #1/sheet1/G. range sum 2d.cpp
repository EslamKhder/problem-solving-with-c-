#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll N, M, Q;
    cin >> N >> M>>Q;
    ll A[N][M];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> A[i][j];
 
    ll pref[N][M];
    for (int i = 0; i < N ; i++){
        for (int j = 0; j < M; j++) {
            pref[i][j] = A[i][j];
            if (i > 0) pref[i][j] += pref[i-1][j];
            if (j > 0) pref[i][j] += pref[i][j-1];
            if (i > 0 && j > 0) pref[i][j] -= pref[i-1][j-1];
            cout<<"--------------------------------------"<<endl;
            for (int q = 0; q < N ; q++){
        		for (int w = 0; w < M; w++) {
        			cout<<pref[q][w]<<" ";
        		}
        		cout<<endl;
        	}
        }
    }
 
    while (Q--) {
        ll x1, y1, x2, y2 ;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 --; y1--; x2--; y2--;
        ll sum = pref[x2][y2];
        if (y1 > 0) sum -= pref[x2][y1-1];
        if (x1 > 0) sum -= pref[x1-1][y2];
        if (x1 > 0 && y1 > 0) sum += pref[x1-1][y1-1];
 
        cout << sum <<endl;
    }
}
