# Siemens-VCS-Asssignment
This repository is a solution for the assignment of VCS topic in Siemens DISW, Software Academy of Excellance.

# Assignment Solution Steps
1. Create a reposiltory on GitHub called Siemens-VCS-Assignemt
2. Clone the repo on my local machine as follows:
```bash
git clone https://github.com/AhmedAlaa2024/Siemens-VCS-Asssignment.git
```
3. Change the current directory to Siemens-VCS-Assignment as follows:
```bash
cd Siemens-EDA-Assignment
```
4. Create file called assignment.cpp which will contains the functions:
```bash
touch assignment.cpp
```
5. Open vs code here to start edit assignment.cpp:
```bash
code .
```
6. Write getSum function as descriped in the assignment's document:
```c++
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
```
7. Create and write simple Makefile to assist me in compiling and running the assignment executable:
```bash
touch Makefile
```
```Makefile
.default: run

run: all
	@./assignment

all: assignment.o
	@g++ -o assignment assignment.o

assignment.o: assignment.cpp
	@g++ -c assignment.cpp

.PHONY: clean
clean:
	@rm -f assignment assignment.o
```
8. Stage the changes
```bash
git add assignemt.cpp
```
9. Commit the changes on the stage
```bash
git commit -m "Create getSum function"
```
10. Push the commit on the remote repository
```bash
git push origin master
```
11. Create a new branch to add new feature which is getAverage and push the new branch to the remote repository:
```bash
git checkout -b getAverage-feature
git push origin getAverage-feature
```
12. Add the new feature on branch `getAverage-feature`:
```c++
int getAverage(vector<int> &arr) {
  long sum = getSum(arr);
  int average = sum / arr.size();

  return average;
}
```
13. Stage the changes
```bash
git add assignemt.cpp
```
14. Commit the changes on the stage
```bash
git commit -m "Create getAverage function"
```
15. Push the commit to branch `getAverage-feature` on the remote repository
```bash
git push -u origin getAverage-feature
```