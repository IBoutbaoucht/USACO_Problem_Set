

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        ll res = 0 ;
        int n ;
        cin >> n ;
        std::vector<ll> A(n) ;
        for(int i=0;i<n;i++){
            cin >> A[i] ;
        }
        string s ;
        cin >> s ;
        for(int i=1;i<n;i++){
            A[i]+=A[i-1] ;
        }
        int i = 0 ;
        int j = n-1 ;
        while(i<j){
            while(i<j && s[i] != 'L'){
                i++ ;
            }
            while(j>i && s[j] != 'R'){
                j-- ;
            }
            if (s[i] == 'L' && s[j] == 'R'){
                if (i == 0){
                    res+= A[j];
                }
                else res+= A[j] - A[i-1];
            }
            i++ ;
            j-- ;
        }
        cout << res << endl;
        
    }
    
    return 0;
}
