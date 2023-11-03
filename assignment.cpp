#include <iostream>
#include <vector>

using namespace std;

long getSum(vector<int> &arr);

int main() {
  // Make the random numbers different each time
  srand(time(NULL));

  vector<int> arr(10);
  
  // Assign random values to the array
  for (int i = 0; i < arr.size(); i++) {
    arr[i] = rand() % 100;
  }

  // Calculate the sum of the array
  long sum = getSum(arr);

  // Print the sum
  cout << "Sum: " << sum << endl;

}

long getSum(vector<int> &arr) {
  long sum = 0;

  for (int i = 0; i < arr.size(); i++) {
    sum += arr[i];
  }

  return sum;
}