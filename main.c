#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int arr[])
{
  for (size_t i = 1; i < sizeof(arr) / sizeof(int); i++)
  {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j -= 1;
    }
    arr[j + 1] = key;
  }
}

int main()
{
  int arr[10] = {23, 12, 18, 27, 35, 42, 51, 63, 74, 86};
  insertion_sort(arr);
  for (size_t i = 1; i < sizeof(arr) / sizeof(int); i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}
