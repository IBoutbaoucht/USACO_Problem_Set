

#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("hps.in","r",stdin);
    freopen("hps.out","w",stdout) ;
    int N  ;
    cin >> N  ;
    std::vector<int> T(N) ;
    vector<vector<int>> P(N,vector<int>(3, 0)) ;
    for(int i=0;i<N;i++){
        char c ;
        cin >> c ;
        if(c == 'P')T[i] = 0 ;
        else if(c == 'S')T[i] = 1 ;
        else T[i] = 2 ;
    }
    P[0][T[0]] = 1 ;
    for(int i=1;i<N;i++){
        P[i] = P[i-1] ;
        P[i][T[i]]++ ;
    }
    int res = 0 ;
    for(int l=1;l<=N;l++){
        int a = max(P[l-1][0],max(P[l-1][1],P[l-1][2])) ;
        vector<int> R = P[N-1] ;
        for(int i=0;i<3;i++){
            R[i]-=P[l-1][i] ;
        }
        int b = max(R[0],max(R[1],R[2])) ;
        res = max(res, a+b ) ;
    }
    
    cout << res << endl ;
    return 0;
}
