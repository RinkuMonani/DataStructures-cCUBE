#include <stdio.h>
#include<math.h>

int main(void) {
	long long int n, i;
	
	scanf("%lld", &n);
	
	printf(" 1 ");
	
	for(i =2; i<sqrt(n); ++i){
	    if(n%i == 0){
	        printf(" %lld ", (n/i));
	        printf(" %lld ",i);
	    }
	}
	printf(" %lld ",n);
	return 0;
}

