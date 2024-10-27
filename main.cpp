#include <iostream>

void print_arr(int *arr_ptr, int size)
{

  for (int i{0}; i < size; ++i)
  {
    std::cout << arr_ptr[i] << std::endl;
  }
}

int *apply_all(int *arr1, int arr1Size, int *arr2, int arr2Size)
{
  int *newArr = new int[arr1Size * arr2Size]; // Creates an array in the Heap and *newArr points to the first element of the new array created

  int outSideIndex{0};

  for (int i{0}; i < arr2Size; ++i)
  {
    for (int k{0}; k < arr1Size; ++k)
    {

      newArr[outSideIndex] = arr1[k] * arr2[i];

      outSideIndex++;
    }
  }

  return newArr;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int arr2[] = {10, 20, 30};

  int *heapPtr = apply_all(arr, 5, arr2, 3);

  print_arr(heapPtr, 15);

  delete[] heapPtr;

  return 0;
}