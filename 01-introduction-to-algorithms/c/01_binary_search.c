
#include <stdio.h>

int binary_search(int[], int, int);

int binary_search(int myList[], int item, int len) {
  int low = 0;
  int high = len;

  while (low <= high) {
    int mid = (high + low) / 2;
    int guess = myList[mid];
    if (guess == item) {
      return mid;
    } else if (guess > item) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }

  return -1;
}

int main() {
  int myList[] = {1, 3, 5, 7, 9};
  int len = sizeof(myList) / sizeof(myList[0]);

  printf("%d\n", binary_search(myList, 3, len));  // 1
  printf("%d\n", binary_search(myList, -1, len)); //-1
  return 0;
}
