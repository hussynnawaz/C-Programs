//Learnprogramo - programming made simple
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
  int k, key, ptr;
  for (k = 1; k < n; k++)
  {
    key = arr[k];
   ptr = k - 1;
    while (ptr >= 0 && arr[ptr] > key)
    {
      arr[ptr + 1] = arr[ptr];
      ptr = ptr - 1;
    }
    arr[ptr + 1] = key;
  }
}
int main()
{
  int n;
  cout << "Enter Size of the Array: ";
  cin >> n;
  int arr[n], i;
  cout << "Enter values of the array\n";
  for (i = 0; i < n; i++)
    cin >> arr[i];
  insertionSort(arr, n);
  cout << "Array after Insertion Sort is: ";
  for (i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}