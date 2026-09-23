# Fractional Knapsack Using Greedy Algorithm

## Aim

To implement the Fractional Knapsack problem using the Greedy Algorithm and maximize the total value of items selected within the given knapsack capacity.

## Problem Statement

Given a set of items, where each item has a weight and a value, and a knapsack with a limited capacity, select items such that the total value is maximized without exceeding the capacity.

In the Fractional Knapsack problem, an item can be divided into fractions. Therefore, if the complete item cannot fit into the knapsack, a fraction of that item can be selected.

## Case Study

### Student Emergency Backpack

A student has a backpack with a limited carrying capacity. The backpack can contain study materials and essential items such as books, notebooks, power banks, and other supplies.

Each item has a different weight and value. Since some items can be partially included, the student wants to select items in such a way that the maximum possible value is obtained without exceeding the backpack's capacity.

The Fractional Knapsack problem can be used to determine the optimal selection of items.

### Example Items

| Item       | Weight | Value | Value/Weight |
| ---------- | ------ | ----- | ------------ |
| Book       | 10 kg  | ₹60   | 6            |
| Laptop     | 20 kg  | ₹100  | 5            |
| Headphones | 30 kg  | ₹120  | 4            |

Knapsack Capacity = 50 kg

The items are selected according to their value-to-weight ratio.

## Greedy Approach

The Greedy Algorithm selects the item with the highest value-to-weight ratio first.

### Steps

1. Calculate the value-to-weight ratio for every item.
2. Sort the items in decreasing order of their value-to-weight ratio.
3. Start with an empty knapsack.
4. Select the complete item if it fits into the remaining capacity.
5. If the complete item does not fit, select the fraction that can fit.
6. Continue until the knapsack becomes full.
7. Calculate and display the maximum total value.

## Algorithm

1. Read the number of items.
2. Read the weight and value of each item.
3. Calculate the value-to-weight ratio of every item.
4. Sort the items in descending order of value-to-weight ratio.
5. Initialize:

   * `totalWeight = 0`
   * `totalValue = 0`
6. Traverse the sorted items.
7. If the complete item fits:

   * Add its weight to `totalWeight`.
   * Add its value to `totalValue`.
8. Otherwise:

   * Calculate the fraction of the item that can fit.
   * Add the corresponding fractional value.
   * Make the knapsack full.
9. Stop when the capacity is reached.
10. Display the selected items and maximum total value.

## Program

The implementation is provided in `fractional_knapsack.cpp`.

## Sample Input

```text
3
50
10 60
20 100
30 120
```

Where:

* `3` = number of items
* `50` = knapsack capacity
* Each following line contains `weight value`

## Sample Output

```text
Items sorted by value/weight ratio:

Item 1 - Weight: 10, Value: 60, Ratio: 6
Item 2 - Weight: 20, Value: 100, Ratio: 5
Item 3 - Weight: 30, Value: 120, Ratio: 4

Selected Items:

Item 1 - 100% selected
Item 2 - 100% selected
Item 3 - 66.67% selected

Total Weight: 50
Maximum Value: 260
```

## Complexity Analysis

Let `n` be the number of items.

### Time Complexity

* Calculating ratios: `O(n)`
* Sorting items: `O(n log n)`
* Selecting items: `O(n)`

Therefore,

**Overall Time Complexity = O(n log n)**

### Space Complexity

The items are stored in an array/vector.

**Space Complexity = O(n)**

## Why Greedy Works

The Greedy approach gives an optimal solution for the Fractional Knapsack problem because items can be divided into fractions.

Selecting the item with the highest value-to-weight ratio first ensures that the available capacity is used to obtain the maximum possible value.

## Technologies Used

* C++
* Data Structures and Algorithms
* Greedy Algorithm

## Key Concepts

* Greedy Algorithm
* Fractional Knapsack
* Sorting
* Value-to-Weight Ratio
* Optimization
* Time and Space Complexity

## Result

The Fractional Knapsack problem was successfully implemented using the Greedy Algorithm. The algorithm selects items based on their value-to-weight ratio and allows fractional selection to maximize the total value within the given capacity.
