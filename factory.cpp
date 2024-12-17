#include<bits/stdc++.h>

using namespace std ;
map<int,int> M ;
std::vector<vector<int>> G ;

int dfs(int x){
        if (G[x].size() == 0){
            return 0 ;
        }
        for( auto y:G[x]){
            M[y]++ ;
            dfs(y) ;
        }
        return 0;
}

int main(){
    freopen("factory.in","r",stdin);
    freopen("factory.out","w",stdout);
    
    int N  ;
    cin >> N ;
    for(int i=0;i<N;i++){
        G.push_back({}) ;
    }
    for(int i=0;i<N-1;i++){
        int X , Y ;
        cin >> X >> Y ;
        G[X-1].push_back(Y-1);
    }

    for(int i=0;i<N;i++){
        M[i]++ ;
        for(auto x:G[i]){
            M[x]++ ;
            dfs(x) ;
        }
    }
    
    int result ;
    bool check = false ;
    for(int i=0;i<N;i++){
        if (M[i] == N){
            result = i+1 ;
            check = true ;
            break ;
        }
    }
    if (check){
        cout << result ;
    }else {
        cout << -1 ;
    }
    return 0;
}