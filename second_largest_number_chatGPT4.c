#include <stdio.h>

int find_second_largest(int numbers[]) {
  int comparison_count = 0;
  
  // İlk üç sayıyı bulalım
  int max1 = -1;
  int max2 = -1;
  int max3 = -1;
  for (int i = 0; i < 3; i++) {
    comparison_count++;
    if (numbers[i] > max1) {
      max3 = max2;
      max2 = max1;
      max1 = numbers[i];
    } else if (numbers[i] > max2) {
      comparison_count++;
      max3 = max2;
      max2 = numbers[i];
    } else if (numbers[i] > max3) {
      comparison_count++;
      max3 = numbers[i];
    }
  }
  
  // Diğer beş sayıyı bulalım
  for (int i = 3; i < 8; i++) {
    comparison_count++;
    if (numbers[i] > max1) {
      max3 = max2;
      max2 = max1;
      max1 = numbers[i];
    } else if (numbers[i] > max2 && numbers[i] < max1) {
      max2 = numbers[i];
    }
  }
  
  printf("Yapilan karsilastirma sayisi: %d\n", comparison_count);
  
  return max2;
}

int main() {
  int numbers[] = {15, 17, 13, 11, 3, 9, 1, 16};
  
  int result = find_second_largest(numbers);
  printf("Sonuc: %d\n", result);
  
  return 0;
}
