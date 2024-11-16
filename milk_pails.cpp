#include <bits/stdc++.h>

using namespace std ;

int ML =  0 ;

int fg(int M ,int x,int y){
	for(int i;i*x<=M;i++){
		int current_Milk = i*x ;
		int j = (M-current_Milk)/y ;
		ML = max(ML,current_Milk+j*y);
	}
	return 0 ;
}

int main(){
	freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
	int X , Y , M ;
	scanf("%d %d %d",&X,&Y,&M);
	fg(M,X,Y);
	cout << ML ;	
	return 0 ;
}
