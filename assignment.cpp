#include <iostream>
#include <vector>

using namespace std;

long getSum(vector<int> &arr);
int getAverage(vector<int> &arr);
int getMin(vector<int> &arr);

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

  // Calculate the average of the array
  int average = getAverage(arr);

  // Print the average
  cout << "Average: " << average << endl;

  // Calculate the minimum of the array
  int min = getMin(arr);

  // Print the minimum
  cout << "Minimum: " << min << endl;

  return 0;
}

long getSum(vector<int> &arr) {
  long sum = 0;

  for (int i = 0; i < arr.size(); i++) {
    sum += arr[i];
  }

  return sum;
}

int getAverage(vector<int> &arr) {
  long sum = getSum(arr);
  int average = sum / arr.size();

  return average;
}

int getMin(vector<int> &arr) {
  int min = arr[0];

  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  return min;
}