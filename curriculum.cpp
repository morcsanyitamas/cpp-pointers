#include <iostream>

void increase1(int (*arr)[5])
{
  for (auto &e : *arr)
    ++e;
}


// function name: increase 3
// input: int *arr, int size
// output: void
// description: increase all elements of arr by 1
void increase3(int *arr, int size)
{
  for (int i = 0; i < size; ++i)
  {
    arr[i]++;
  }
}

void increase4(int arr[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    arr[i]++;
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int arr2[5];

  for (int i = 0; i < 5; ++i)
  {
    arr2[i] = i + 6;
  }

  increase1(&arr);
  increase1(&arr2);

  //  for (const auto &e : arr)
  //    std::cout << e << std::endl;
  for (const auto &e : arr2)
    std::cout << e << std::endl;
}
