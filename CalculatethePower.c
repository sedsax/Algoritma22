#include <stdio.h>

int main(){
    const unsigned int M = 1000000007; // modul 10^9+7 ??
	int a, b;
	unsigned long long int result = 1;
	scanf("%d%d", &a,&b);
	
	if(b != 0) {
	    
	    for(int i=0; i<b; i++) {
		result = (result * a) % M;
	        
	    }
	    printf("%lld\n",result);
	}
	else{
	    printf("%lld\n", result);
	}
	
}

/*
Bu kod çözüm olarak "kısmen kabul edildi". Çok daha büyük bir değeri tutamadı, ve ben bunu nasıl çözeceğimi henüz bulamadım.

https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/calculate-the-power/


*/
