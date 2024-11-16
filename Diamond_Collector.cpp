#include <bits/stdc++.h>

using namespace std ;


int main(){
	freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
	int N , K ;
	scanf("%d %d",&N,&K);
	vector<int> sizes(N) ;
	for(int i =0;i<N;i++){
		cin >> sizes[i];
	}
	int maxE = 0 ;
	for(int i=0; i < (1<<N) ;i++){
		int maxsize = 0 ;
		int minsize = 10000 ;
		for(int j=0;j<N;j++){
			if(i & (1<<j) ){
				maxsize = max(maxsize,sizes[j]);
				minsize = min(minsize,sizes[j]);	
			}
		}
		if(maxsize-minsize <= K){
			maxE = max(maxE,__builtin_popcount(i));
		}
	}
	
	cout << maxE ;	
	return 0 ;
}
