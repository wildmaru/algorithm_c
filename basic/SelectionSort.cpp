#include <iostream>

int main(void) {
  int i, j, min, idx, tmp;
  int array[8] = {5,4,8,7,6,3,2,1};

  for(i=0; i<8; i++) {
    min = 100;
    for(j=i; j<8; j++) {
      if(min > array[j]) {
        min = array[j];
        idx = j;
      }
    }

    tmp = array[i];
    array[i] = array[idx];
    array[idx] = tmp;
  }

  for(i=0; i<8; i++) {
    printf("%d", array[i]);
  }

  return 0;
}
