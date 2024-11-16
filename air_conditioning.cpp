#include <bits/stdc++.h>

using namespace std ;

int n,m,s,t,c;
int cond[10][4];
int baqara[101];
int testcase[101];


int main(){
	cin >> n >> m ;
	for(int i=0;i<n;i++){
		cin >> s >> t >> c ;
		for(int u=s;u<=t;u++){
			 baqara[u] = c ;
			 testcase[u] = c ;
		}
	}
	for(int i=0;i<m;i++){
		cin >> cond[i][0] >> cond[i][1] >> cond[i][2] >> cond[i][3] ;
	}
	int res = 1e9 ;
	for(int j=0;j<(1<<m);j++){
		int tmp = 0 ;
		for(int f=0;f<m;f++){
			if ( (1<<f) & j){
				tmp+= cond[f][3] ;
				for(int p=cond[f][0];p<=cond[f][1];p++){
					testcase[p]-= cond[f][2];
				}
			}
		}
		bool check = false ;
		for(int i=1;i<=100;i++) if (testcase[i] > 0) check = true ;
		if(!check){
			res = min(res,tmp);
		}
		for(int i=1;i<=100;i++) testcase[i] = baqara[i] ;
	}
	cout << res << endl;
	
	return 0 ;
}
