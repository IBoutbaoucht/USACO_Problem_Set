
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <bits/stdc++.h>

using namespace std;

int main(){
    
    freopen("herding.in","r",stdin);
    freopen("herding.out","w",stdout);
    
    std::vector<int> p(3) ;
    cin >> p[0] >> p[1] >> p[2] ;
    sort(p.begin(),p.end());
    if (p[0]+1 == p[1] && p[2] == p[1]+1){
        cout << 0 << endl ;
        cout << 0 << endl ;
        return 0 ;
    }
    if (p[0]+1 == p[1]){
        cout << min(2,p[2]-p[1]-1) << endl ;
        cout << p[2]-p[1]-1 ;
        return 0 ;
    }
    if (p[2] == p[1]+1){
        cout << min(2,p[1]-p[0]-1) << endl ;
        cout << p[1]-p[0]-1 ;
        return 0 ;
    }
    cout << min(p[1]-p[0]-1,min(p[2]-p[1]-1,2)) << endl ;
    cout << max(p[1]-p[0]-1,p[2]-p[1]-1) ;
    
    return 0;
}
