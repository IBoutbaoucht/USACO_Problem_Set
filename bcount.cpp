

#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("bcount.in","r",stdin);
    freopen("bcount.out","w",stdout) ;
    int N , Q ;
    cin >> N >> Q ;
    std::vector<int> T(N) ;
    vector<vector<int>> res(Q,vector<int>(3, 0)) ;
    for(int i=0;i<N;i++){
        cin >> T[i] ;
    }
    vector<vector<int>> A(N, vector<int>(3, 0));
    A[0][T[0]-1] = 1 ;
    for(int i=1;i<N;i++){
        A[i] = A[i-1] ;
        A[i][T[i]-1]++ ;
    }
    for(int j=0;j<Q;j++){
        int a , b ;
        cin >> a >> b ;
        if (a==1){
            res[j] = A[b-1] ;
        }else {
            vector<int> L ;
            L = A[b-1] ;
            for(int i=0;i<3;i++){
                L[i]-= A[a-2][i] ;
            }
            res[j] = L ;
        }
    }
    for(auto c:res){
        cout << c[0] << " " << c[1] << " " << c[2] << endl ;
    }
    return 0;
}
