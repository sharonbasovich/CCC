#include <bits//stdc++.h>
using namespace std;
int N;
int arr[100];
int main() {
  cin >> N;
  for (int i = 0; i < N; i++)
    {
      cin >> arr[i];
    }
  sort(&arr[0], &arr[N]);
  int smallrange = int(floor(N/2));
  if (N % 2 == 0)
  {
    for (int j = 0; j < smallrange; j++)
      {
        cout << arr[smallrange - 1 - j] << " ";
        cout << arr[smallrange + j] << " ";
      }
  }
  else
  {
    
    for (int j = 0; j < smallrange; j++)
      {
        cout << arr[smallrange - j] << " ";
        cout << arr[smallrange + 1 + j] << " ";
      }
    cout << arr[0] << " ";
  }
  return 0;
}
