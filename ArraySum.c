/*

Problem
You are given an array A consisting of N integers. 

Task

Print the sum of the elements in the array. 

Note: Some of the integers may be quite large.

*/

#include <stdio.h>

int main(){

	int n;
	long int sum=0;
	scanf("%d", &n);
	long int arr[n];
	for(int i=0; i<n; i++) {
		scanf("%ld", &arr[i]);
	}
	for(int i=0; i<n; i++) {
		sum = sum + arr[i];
	}
	printf("%ld\n", sum);
}
