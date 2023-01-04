#include <stdio.h>

int find_second_largest(int numbers[]) {
  // En büyük sayıyı bulalım
  int max1 = -1;
  for (int i = 0; i < 8; i++) {
    if (numbers[i] > max1) {
      max1 = numbers[i];
    }
  }
  
  // En büyük sayıdan sonraki sayıyı bulalım
  int max2 = -1;
  for (int i = 0; i < 8; i++) {
    if (numbers[i] > max2 && numbers[i] < max1) {
      max2 = numbers[i];
    }
  }
  
  return max2;
}

int main() {
  int numbers[] = {15, 17, 13, 11, 3, 9, 1, 16};
  
  int result = find_second_largest(numbers);
  printf("Sonuc: %d\n", result);
  
  return 0;
}
