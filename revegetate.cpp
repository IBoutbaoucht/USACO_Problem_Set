#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("revegetate.in","r",stdin);
    freopen("revegetate.out","w",stdout);
    int N , M ;
    cin >> N >> M ;
    std::vector<vector<int>> G(N) ;
    for(int i=0;i<M;i++){
        int X , Y ;
        cin >> X >> Y ;
        if (X < Y){
            G[Y-1].push_back(X-1) ;
        }
        else {
            G[X-1].push_back(Y-1);
        }
    }
    vector<int> result(N,0) ;
    result[0] = 1 ;
    for(int i=1;i<N;i++){
        int target = 1 ;
        if (G[i].size() == 1){
            if (result[G[i][0]] == 1){
                target = 2 ;
            }
        }
        else if(G[i].size() == 2){
            vector<int> T ;
        	T.push_back(result[G[i][0]]);
        	T.push_back(result[G[i][1]]);
        	if(find(T.begin(), T.end(), 1) != T.end()){
        		if(find(T.begin(), T.end(), 2) != T.end()){
        		    target = 3 ;
				}else {
					target = 2 ;
				}	
        	}
        }
        else if(G[i].size() == 3){
        	vector<int> T ;
        	T.push_back(result[G[i][0]]);
        	T.push_back(result[G[i][1]]);
        	T.push_back(result[G[i][2]]);
        	if(find(T.begin(), T.end(), 1) != T.end()){
        		if(find(T.begin(), T.end(), 2) != T.end()){
        			if(find(T.begin(), T.end(), 3) != T.end()){
        				target = 4 ;
					}
					else{
						target = 3 ;
					}
				}else {
					target = 2 ;
				}	
        	}
	    }
	result[i] = target ;
        	  
    }
    for(auto g:result){
        cout << g ;
    }
    return 0;
}