#include <bits/stdc++.h>

typedef long long ll ;
int n ;
ll a,b,c ;


int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lld %lld %lld",&a,&b,&c);
		if (c<a) printf("NO\n");
		else{
			c-=a ;
			if(c%b == 0 || c%b == 1) printf("YES\n");
			else{
				printf("NO\n");
			}
		}
	}
	
	
	
	
	return 0 ;
}
