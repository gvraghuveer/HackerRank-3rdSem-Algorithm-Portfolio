# HackerRank 3rd Semester Algorithm Portfolio

A collection of algorithmic problem solutions completed as part of the 3rd Semester Computer Science and Engineering coursework.

## Student Details

- **Name:** G V Raghuveer
- **SRN:** R25EF084
- **Semester:** 3rd Semester
- **Programming Language:** C++
- **HackerRank Profile:** [https://www.hackerrank.com/profile/gvraghuveer07](https://www.hackerrank.com/profile/gvraghuveer07)
- **GitHub Repository:** [https://github.com/gvraghuveer/HackerRank-3rdSem-Algorithm-Portfolio](https://github.com/gvraghuveer/HackerRank-3rdSem-Algorithm-Portfolio)

## About This Portfolio

This repository contains solutions to five mandatory algorithmic problems covering implementation, arrays, sorting, searching, and greedy algorithms.

Each solution includes:
- Clean and readable C++ implementation
- Time complexity analysis
- Auxiliary space complexity analysis
- Brief explanation of the approach

## Problems

| No. | Problem | Topic | Time Complexity | Space Complexity |
|---|---|---|---|---|
| 1 | [Mini-Max Sum](./01-Mini-Max-Sum/) | Arrays / Implementation | O(N) | O(1) |
| 2 | [Birthday Cake Candles](./02-Birthday-Cake-Candles/) | Arrays / Counting | O(N) | O(1) |
| 3 | [Insertion Sort – Part 1](./03-Insertion-Sort-Part-1/) | Sorting | O(N) | O(1) |
| 4 | [Binary Search](./04-Binary-Search/) | Searching | O(log N) | O(1) |
| 5 | [Mark and Toys](./05-Mark-and-Toys/) | Greedy / Sorting | O(N log N) | O(1)* |

\* Auxiliary space for Mark and Toys is considered O(1), excluding implementation-dependent memory used internally by `std::sort`.

## Problem Details

### 1. Mini-Max Sum

**Approach:**  
Calculate the total sum of all elements while tracking the minimum and maximum values. The minimum possible sum is obtained by excluding the maximum value, while the maximum possible sum is obtained by excluding the minimum value.

**Time Complexity:** `O(N)`

**Auxiliary Space Complexity:** `O(1)`

**Alternative Approach:**  
The array can be sorted and the first four and last four elements can be summed. However, sorting requires `O(N log N)` time, making the single-pass approach more efficient.

**Solution:**  
[View Solution](./01-Mini-Max-Sum/solution.cpp)

**HackerRank:**  
[Mini-Max Sum](https://www.hackerrank.com/challenges/mini-max-sum/problem)

---

### 2. Birthday Cake Candles

**Approach:**  
Traverse the array while keeping track of the maximum candle height and the number of candles having that height. When a taller candle is found, the maximum height is updated and the count is reset. If another candle has the same maximum height, the count is increased.

**Time Complexity:** `O(N)`

**Auxiliary Space Complexity:** `O(1)`

**Why This Approach:**  
A single traversal is sufficient because only the maximum height and its frequency are required. Sorting the array would require additional unnecessary computation.

**Solution:**  
[View Solution](./02-Birthday-Cake-Candles/solution.cpp)

**HackerRank:**  
[Birthday Cake Candles](https://www.hackerrank.com/challenges/birthday-cake-candles/problem)

---

### 3. Insertion Sort – Part 1

**Approach:**  
Store the last element of the array as the value to be inserted. Starting from the element before it, shift every larger element one position to the right until the correct position for the stored value is found. The value is then inserted into that position.

**Time Complexity:** `O(N)`

**Auxiliary Space Complexity:** `O(1)`

**Why This Approach:**  
Only one element needs to be inserted, so the required shifts can be performed directly within the array without using additional storage.

**Solution:**  
[View Solution](./03-Insertion-Sort-Part-1/solution.cpp)

**HackerRank:**  
[Insertion Sort – Part 1](https://www.hackerrank.com/challenges/insertionsort1/problem)

---

### 4. Binary Search

**Approach:**  
Binary Search is performed on the sorted array by repeatedly checking the middle element. If the middle element is smaller than the target, the search continues in the right half. If it is larger, the search continues in the left half. This process continues until the target is found or the search range becomes empty.

**Time Complexity:** `O(log N)`

**Auxiliary Space Complexity:** `O(1)`

**Why This Approach:**  
Each iteration eliminates approximately half of the remaining search space, making Binary Search significantly more efficient than a linear search for a sorted array.

**Solution:**  
[View Solution](./04-Binary-Search/solution.cpp)

**Implementation Note:**  
This problem was implemented and tested as a standalone C++20 program in a suitable coding environment.

---

### 5. Mark and Toys

**Approach:**  
Sort the toy prices in ascending order and purchase the cheapest toys first. Continue purchasing toys while the total cost remains within the available budget. Stop when purchasing the next toy would exceed the budget.

**Time Complexity:** `O(N log N)`

**Auxiliary Space Complexity:** `O(1)*`

**Why This Approach:**  
Since the goal is to maximize the number of toys purchased, selecting the cheapest toys first allows the budget to cover the largest possible number of toys.

**Solution:**  
[View Solution](./05-Mark-and-Toys/solution.cpp)

**HackerRank:**  
[Mark and Toys](https://www.hackerrank.com/challenges/mark-and-toys/problem)

\* Auxiliary space excludes implementation-dependent memory used internally by `std::sort`.

---

## HackerRank Achievement

During the completion of these algorithmic problems, the HackerRank profile earned:

**Problem Solving — 1st Star ⭐**

This achievement represents progress toward the HackerRank Problem Solving star-rating goal.

---

## Complexity Summary

| Problem | Time | Auxiliary Space |
|---|---|---|
| Mini-Max Sum | O(N) | O(1) |
| Birthday Cake Candles | O(N) | O(1) |
| Insertion Sort – Part 1 | O(N) | O(1) |
| Binary Search | O(log N) | O(1) |
| Mark and Toys | O(N log N) | O(1)* |

\* Auxiliary space excludes implementation-dependent memory used internally by `std::sort`.

---

## Repository Structure

```text
HackerRank-3rdSem-Algorithm-Portfolio/
│
├── README.md
│
├── 01-Mini-Max-Sum/
│   └── solution.cpp
│
├── 02-Birthday-Cake-Candles/
│   └── solution.cpp
│
├── 03-Insertion-Sort-Part-1/
│   └── solution.cpp
│
├── 04-Binary-Search/
│   └── solution.cpp
│
└── 05-Mark-and-Toys/
    └── solution.cpp

```

---
## Reflection
This activity helped me strengthen my understanding of fundamental algorithms and their efficiency. I practiced different approaches including single-pass array traversal, counting, insertion and shifting, binary search, and greedy problem solving with sorting. Implementing the solutions in C++20 also helped me improve my ability to write structured and readable code. Analyzing time and auxiliary space complexity made me more aware of how algorithm selection affects performance. Completing the HackerRank challenges and earning the Problem Solving 1st Star also provided practical experience in solving problems under a coding-platform environment. Overall, this activity helped connect theoretical algorithm concepts with their practical implementation and encouraged me to focus on writing efficient solutions rather than only obtaining the correct output.