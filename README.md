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