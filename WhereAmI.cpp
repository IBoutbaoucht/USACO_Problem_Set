#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("whereami.in","r",stdin);
    freopen("whereami.out","w",stdout);
    int n;
    cin >> n ;
    string s ;
    cin >> s;
    for(int l=1;l<=n;l++){
        map<string,int> m ;
        for(int i=0;i+l<=n;i++){
            string sub = s.substr(i, l) ;
            if (m.count(sub)){
                m[sub]+=1 ;
            }else {
                m[sub]=1 ;
            }
           
        }
        bool check = true;
        for(auto &x:m){
            if (x.second >1){
                check = false ;
            }
        }
        if (check){
            cout << l ;
            return 0 ;
        }
    }
    return 0;
}
