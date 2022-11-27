//Faydalandığım kaynak: https://www.geeksforgeeks.org/longest-increasing-subarray/

#include <stdio.h>

int EnUzunAltDizi(int A[], int n){
       
    int max = 1, len = 1;
    
    for(int i=0; i<(n-1); i++) // --------------------------------- A1 => 2 3 5 8 12
        A[i] = A[i+1] - A[i];   //  B[i]=A[i+1]-A[i] (i=1,2,…n-1)-- A2 => 1 2 3 4 ----- output 4 
    
     
    for (int i=1; i<n-1; i++){
        
        if (A[i] > A[i-1])
            len++;
        else{
           
            if (max < len)   
                max = len;
                 
            len = 1;   
        }   
    }
    if (max < len)
        max = len;
     
    return max;
}


int main(){
   
   int n;
   scanf("%d",&n);
   int A[n];
   
   for(int i=0; i<n; i++)
    scanf("%d",&A[i]);          
   
   printf("%d\n", EnUzunAltDizi(A,n)); 

    return 0;
}
