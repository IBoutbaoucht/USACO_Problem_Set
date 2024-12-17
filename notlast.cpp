
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("notlast.in","r",stdin);
    freopen("notlast.out","w",stdout);
    map<string,int> milk ;
    milk.insert({"Bessie",0});
    milk.insert({"Elsie",0});
    milk.insert({"Daisy",0});
    milk.insert({"Gertie",0});
    milk.insert({"Annabelle",0});
    milk.insert({"Maggie",0});
    milk.insert({"Henrietta",0});
    int n ;
    cin >> n ;
    string name ;
    int quantity ;
    while(n--){
        cin >> name >> quantity ;
        milk[name]+=quantity ;
    }
    int minQ = 10000 ;
    for(auto x : milk){
        minQ = min(minQ,x.second);
    }
    int Nmin = 10000 ;
    string cow = "a";
    bool multi = true ;
    for(auto x : milk){
        if (x.second != minQ && x.second < Nmin){
            cow = x.first ;
            Nmin = x.second ;
            multi = false ;
        }
        else if (x.second != minQ && x.second == Nmin){
            multi = true ;
        }
    }
    if (multi){
        cout << "Tie" << endl;
    }else {
        cout << cow << endl ;
    }
    return 0;
}
