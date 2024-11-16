#include <bits/stdc++.h>

using namespace std ;

int main(){
	int n ;
	cin >> n ;
	vector<int> G;
	vector<int> L;
	char c ;
	int pi ;
	for(int i=0;i<n;i++){
		cin >> c;
		cin >> pi ;
		if (c == 'G'){
			G.push_back(pi);
		}
		else {
			L.push_back(pi);
		}
	}
	sort(G.begin(),G.end());
	sort(L.begin(),L.end());
	int g = G.size();
	int l = L.size();
	int liars = min(g,l);
	int i=0;
	int j =0;
	while(i<l & j<g){
		if (L[i]-G[j]>=0){
			liars = min(liars,i+g-j-1);
			j+=1;
		}
		else{
			i+=1 ;
		}
	}	
	cout << liars ;
	
	return 0 ;
	
}
