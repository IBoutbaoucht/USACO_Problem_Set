#include <bits/stdc++.h>

using namespace std ;

int main(){
	freopen("guess.in", "r", stdin);
    freopen("guess.out", "w", stdout);
	int n ;
	cin >> n ;
	set<string> A[n] ;
	string animal ;
	int k ;
	string chart ;
	for(int i=0;i<n;i++){
		cin >> animal ;
		cin >> k ;
		for(int u=0;u<k;u++){
			cin >> chart ;
			A[i].insert(chart);
		}
	}
	int res = 0 ;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int swm = 0 ;
			for(const string& element : A[i]){
				if(A[j].count(element))swm++;
			}
			res = max(res,swm);
		}
	}
	
	cout << res+1 ;
	return 0 ;
	
}
