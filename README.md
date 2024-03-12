# Karatsuba's Multiplication Algorithm

This is my implementation of the Karatsuba multiplication algorithm in C++. This implementation is my interpretation of the algorithm, according to me this is the easiest implementation out there, easier then what was on [gfg](https://www.geeksforgeeks.org/karatsuba-algorithm-for-fast-multiplication-using-divide-and-conquer-algorithm/) atleast.

## What is the Karatsuba Algorithm?

The Karatsuba algorithm is a fast multiplication algorithm that was discovered by Anatolii Alexeevitch Karatsuba in 1960. It is a divide-and-conquer algorithm that reduces the multiplication of `two n-digit numbers to three multiplications of n/2-digit numbers`, along with some additions and shifts.

## Quick Start

```console
g++ main.cpp -o main

./main
```

## Algorithm Details

The algorithm works as follows:

- If either of the input numbers is less than 10, it performs a simple multiplication.
- Otherwise, it splits the input numbers into two halves and recursively applies the algorithm.
- It calculates the product of the two numbers using the formula:  
  x _ y = (a _ c) _ 10^n + ((a + b) _ (c + d) - a _ c - b _ d) _ 10^(n/2) + b _ d

  where:

  - a, b, c, d are the respective halves of the input numbers.
  - n is the number of digits in the input numbers.

enjoy!
