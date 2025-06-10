**Search Algorithms Repository**

**Description**

This repository contains implementations of commonly used search algorithms in both C and Python. The algorithms included are Linear Search, Binary Search, Jump Search, Interpolation Search, and Exponential Search. Each algorithm is implemented in both languages to demonstrate their functionality and performance on sorted and unsorted datasets. This project is ideal for learning and comparing search algorithm implementations across two popular programming languages.
Table of Contents

Installation
Usage
Algorithms
Folder Structure
Contributing
License

**Installation**

Prerequisites

C: A C compiler (e.g., GCC)
Python: Python 3.x
Optional: Git for cloning the repository

For C files:
Compile using GCC:gcc c/linear_search.c -o linear_search
gcc c/binary_search.c -o binary_search
gcc c/jump_search.c -o jump_search -lm
gcc c/interpolation_search.c -o interpolation_search
gcc c/exponential_search.c -o exponential_search


Run each compiled file, e.g., ./linear_search


For Python files:
Ensure Python 3 is installed.
Run any Python script:python python/linear_search.py


**Usage**

C Programs: Each C file contains a main function with a sample array and key to test the algorithm. Modify the array or key in the source code to test different inputs.
Example: ./linear_search will output the index of the key or -1 if not found.


Python Scripts: Each Python script includes a sample array and key. Run the script directly or import the function into your project.
Example: python linear_search.py will output the index of the key or -1 if not found.


## Algorithms

The repository includes the following search algorithms:
```
**Linear Search:** Sequentially checks each element. Time complexity: O(n).**

Binary Search:** Divides sorted array in half repeatedly. Time complexity: O(log n).

**Jump Search:** Jumps fixed steps in a sorted array, then uses linear search. Time complexity: O(√n).

**Interpolation Search:** Estimates position in uniformly distributed sorted arrays. Time complexity: O(log log n) average case.

**Exponential Search:** Uses exponential jumps to find a range, then applies binary search. Time complexity: O(log n).
```


Each algorithm is implemented in both C and Python, with comments explaining the logic.


---

## Folder Structure
```
search-algorithms/
├── c/
│   ├── linear_search.c
│   ├── binary_search.c
│   ├── jump_search.c
│   ├── interpolation_search.c
│   └── exponential_search.c
├── python/
│   ├── linear_search.py
│   ├── binary_search.py
│   ├── jump_search.py
│   ├── interpolation_search.py
│   └── exponential_search.py
├── README.md
└── .gitignore
```

---
