

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n ;
    cin >> n ;
    string s ;
    cin >> s ;
    set<char> letters ;
    for(auto x:s){
        letters.insert(x);
    }
    ll types = letters.size() ;
    map<int,int> D ;
    ll res = 1e6 ;
    
    ll recuperer = 0 ;
    ll j = 0 ;
    while(j<n){
        if (D[s[j]] == 0){
            recuperer++ ;
        }
        D[s[j]]++ ;
        if (recuperer == types){
            res = min(res,j+1);
            break ;
        }
        j++ ;
    }
    for(ll i=1;i<n;i++){
        D[s[i-1]]-- ;
        while(D[s[i-1]] == 0 && j<n){
            j++ ;
            D[s[j]]++ ;
        }
        if (j<n) res = min(res,j-i+1);
    }
    
    cout << res ;
    
    return 0;
}
