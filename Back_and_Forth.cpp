#include <bits/stdc++.h>
using namespace std;

	set<int> V ;
    vector<int> T1(10) ;
    vector<int> T2(10) ;
    
void iterate(int steps,int choosen_i,int choosen_j,int value){
	if(steps == 2){
		V.insert(value);
		return ;
	}
	for(int i=0;i<10;i++){
		if (i !=choosen_i){
			int c1 = T1[i];
			for(int j=0;j<10;j++){
				if (j != choosen_j){
					int c2 = T2[j];
					iterate(steps+1,i,j,value+c2-c1);
				}
			}
		}	
	}
	if (choosen_j != 11){
		int c1 = T2[choosen_j];
		for(int j=0;j<10;j++){
			if (j != choosen_j){
				int c2 = T2[j];
				iterate(steps+1,choosen_j,j,value+c2-c1);
			}
		}
	}
	if (choosen_i != 11){
		int c2 = T1[choosen_i];
		for(int i=0;i<10;i++){
			if (i != choosen_i){
				int c1 = T1[i];
				iterate(steps+1,i,choosen_i,value+c2-c1);
			}
		}
	}
	
	return ;	
	
	
}

int main() {
	
	freopen("backforth.in", "r", stdin);  
    freopen("backforth.out", "w", stdout);

    for(int i=0;i<10;i++){
    	cin >> T1[i];
	}
	for(int i=0;i<10;i++){
    	cin >> T2[i];
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			V.insert(T2[j]-T1[i]);
		}	
	}
	iterate(0,11,11,0);
	V.insert(0);
	cout << V.size() ;
 
    return 0;
}

