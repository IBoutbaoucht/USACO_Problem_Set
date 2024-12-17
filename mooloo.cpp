
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<bits/stdc++.h>
typedef long long ll ;
using namespace std;

int main(){
    ll n,k ;
    cin >> n >> k ;
    std::vector<ll> days(n);
    for(ll i=0;i<n;i++){
        cin >> days[i] ;
    }
    sort(days.begin(),days.end()) ;
    ll moonies = 0 ;
    ll i = 0 ;
    ll j = 0 ;
    while(i<n){
        while(j<n && days[j]-days[i] < k+1 ){
            j++ ;
        }
        moonies+= days[j-1]-days[i] + k +1;
        i = j ;
    }
    cout << moonies << endl;
    return 0;
}
