#include <stdio.h>

int fonk(int arr[], int n) {
    int c= 0;
    
    for(int i=0; i<n; i++) {
        
        for(int j=i+1; j<n; j++) {
            
            if(arr[j] > arr[j-1])
                c++;
            else
                break;
        }
    }
    return c;
}

int main(){
    
    int n=4;
    int arr[] = {1,2,3,4};

    printf("%d",fonk(arr, n));

    return 0;
}
