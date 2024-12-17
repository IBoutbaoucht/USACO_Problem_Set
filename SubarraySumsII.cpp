

#include<bits/stdc++.h>

typedef long long ll ;

using namespace std;

int main(){
    int N , X ;
    cin >> N >> X ;
    std::vector<int> T(N) ;
    vector<int> P(N) ;
    for(int i=0;i<N;i++){
        cin >> T[i] ;
    }
    P[0] = T[0] ;
    for(int i=1;i<N;i++){
        P[i] = P[i-1]+T[i] ;
    }
    vector<int> C(N) ;
    for(int i=0;i<N;i++) C[i] = P[i] + X ;
    ll res = count(P.begin(),P.end(),X) ;
    map<int,int> mapC ;
    mapC[C[0]]++ ;
    for(int j=1;j<N;j++){
        res+= mapC[P[j]] ;
        mapC[C[j]]++ ;
    }
    
    cout << res << endl ;
    return 0;
}
