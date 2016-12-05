#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define N 10
int select(int arr[], int n, int k);

int main(void) {
  int *arr;
  int value;
  clock_t elapse;

  system("color E");

  srand((unsigned)time(NULL));
  arr = (int *)malloc(sizeof(int) * N);
  for (int j = 0; j < N; j++) {
    arr[j] = rand() % 100000;
    printf("%d ", arr[j]);
  }
  putchar('\n');

  elapse = clock();
  value = select(arr, N, N / 2);
  elapse = clock() - elapse;
  printf("Value: %d, elapsed: %.4lfs\n", value, (double)elapse / 1000);

  free(arr);
  system("pause");
  return 0;
}

/*选择数组中第k个最大者*/
int select(int arr[], int n, int k) {
  int *tmp;
  int i, j, ret;

  tmp = (int *)malloc(sizeof(int) * k);
  tmp[0] = arr[0];
  for (i = 1; i < k; i++) //读入k个元素并降序排列
  {
    tmp[i] = arr[i];
    for (j = i; j > 0; j--) {
      if (arr[i] > tmp[j - 1]) {
        tmp[j] = tmp[j - 1];
        tmp[j - 1] = arr[i];
      }
    }
  }

  for (i = k; i < n; i++) //读入arr[k]
  {
    if (tmp[k - 1] < arr[i]) {
      tmp[k - 1] = arr[i];
      for (j = k - 1; j > 0; j--) {
        if (arr[i] > tmp[j - 1]) {
          tmp[j] = tmp[j - 1];
          tmp[j - 1] = arr[i];
        }
      }
    }
  }

  ret = tmp[k - 1];
  free(tmp);
  return ret;
}