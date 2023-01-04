#include <stdio.h>

int find_second_largest(int numbers[]) {
  int comparison_count = 0;
  
  // En büyük ve en küçük sayıyı bulalım
  int max = -1;
  int min = 1000000;
  for (int i = 0; i < 8; i++) {
    comparison_count++;
    if (numbers[i] > max) {
      max = numbers[i];
    }
    comparison_count++;
    if (numbers[i] < min) {
      min = numbers[i];
    }
  }
  
  // Diğer 6 sayıdan en büyük sayıyı bulalım
  int second_max = -1;
  for (int i = 0; i < 8; i++) {
    if (numbers[i] > second_max && numbers[i] < max) {
      comparison_count++;
      second_max = numbers[i];
    }
  }
  
  printf("Yapilan karsilastirma sayisi: %d\n", comparison_count);
  
  return second_max;
}

int main() {
  int numbers[] = {15, 17, 13, 11, 3, 9, 1, 16};
  
  int result = find_second_largest(numbers);
  printf("Sonuc: %d\n", result);
  
  return 0;
}
