

#include<bits/stdc++.h>

using namespace std;

int main(){
     freopen("race.in","r",stdin);
    freopen("race.out","w",stdout);
    int D , N ;
    cin >> D >> N ;
    std::vector<int> T ;
    while(N--){
        int X ;
        cin >> X ;
        int s = 1 ;
        int r = D ;
        int otp = 0 ;
        while(r > 0 && s < X){
            r-=s ;
            s++ ;
            otp++ ;
        }
        bool once = true ;
        while(r > 0){
            r-=s ;
            otp++ ;
            if (once){
                once = false ;
            }else {
                s++;
                once = true ;
            }
        }
        T.push_back(otp) ;
    }
    for(auto x:T){
        cout << x << endl ;
    }
    return 0;
}
