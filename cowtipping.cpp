
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <bits/stdc++.h>
typedef long long ll ;
using namespace std;

int main(){
    freopen("cowtip.in","r",stdin);
    freopen("cowtip.out","w",stdout);
    int n ;
    cin >> n ;
    int tipped = 0 ;
    vector<vector<int>> M(n,vector<int> (n,0));
    for(int i=0;i<n;i++){
        string row;
        cin >> row;
        for(int j=0;j<n;j++){
            M[i][j] = row[j] - '0';
            tipped+= M[i][j] ;
        }
    }
    int flips = 0 ;
    int d = 0 ;
    int b = 0  ;
    int maxdistance = 0 ;
    while(tipped != 0){
        int d = 0 ;
        int b = 0  ;
        int maxdistance = 0 ;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if (M[i][j] == 1){
                    if (i+j > maxdistance){
                        maxdistance = i+j ;
                        d = j ;
                        b = i ;
                    }
                }
            }
        }
        for(int i=0;i<=b;i++){
            for(int j=0;j<=d;j++){
                  if (M[i][j] == 1 ) {
                      tipped-- ;
                      M[i][j] = 0 ;
                  }else {
                      tipped++ ;
                      M[i][j] = 1 ;
                  }
            }
        }
        flips++ ;

    }

    cout << flips << endl;
    return 0;
}
