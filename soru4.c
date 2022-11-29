/*
A[1...n] dizisinin elemanları [1, n] aralığından olan farklı tam sayılardır. Eğer A[i1]=i2, A[i2]=i3,...A[ik-1]=ik
ve A[ik]=i1 ise (i1,i2, ...ik) indisler dizisine k uzunluklu döngü denir. Bir i için A[i]=i ise (i) 1 uzunluklu 
döngüdür. Örneğin, 4, 6, 3, 5, 8, 7, 2, 1 dizisinde (1, 4, 5, 8) dizisi 4-uzunluklu döngüdür. Bu dizide (2, 6, 
7) dizisi 3 uzunluklu ve (3) ise 1 uzunluklu döngülerdir. Yani bu dizide 3 adet döngü vardır. 
Verilen bir dizinin döngü sayısını O(n) işlem zamanında bulabilen bir algoritmanın kodunu yazınız.
Kodunuzun girdisi n sayısı ve A dizisidir, kodunuzun çıktısı ise döngü sayısıdır.
*/

#include <stdio.h>
   
int main(){
    int n, value;
    scanf("%d",&n); // girdi n
    
    int B[n+1];     // (i1,i2, ...ik) -> soruda i 1 den başlıyor
    for(int k=1; k<=n; k++)   
        B[k]=0; 
     
    int A[n+1];   // o yüzden dizilerin elemanları da 1 den başlamalı
    for(int k=1; k<=n; k++)
       scanf("%d",&A[k]);  // girdi A dizisi
     
    int i = 1;  
    int sayac=0; // A[n+1] dizisinin elemanları 1-n arasında olduğundan en az 1 döngü kesinlikle olmak zorunda o yüzden sayac 1 den başladı
    while(i<=n){ 
       
     if(B[i]==0){
         B[i]=1;    // burada amaç B' de uğramış olduğumuz indislere bir daha uğramamak   
         value = A[i];
         //printf(" %d",i);
         i=value;                   
     }   
     else { 
         i++;                    
         if(B[i]==0) {
            // printf("%d ", sayac);
             sayac++;
         }
       
     }              
  }  
  printf("%d\n", sayac);   // çıktı; döngü sayısı
   
   
   return 0;            
 }  
