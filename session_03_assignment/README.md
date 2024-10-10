# Programming/Coding Tasks For Session 03

These are your coding tasks for practice on debugging, the use of arrays and strings.

Tasks 1 - 5 : You are required to debug the codes.


### Task 6: **Rotate an Array** `rotate_array.cpp`
Rotate an array of integers to the right by a given number of steps within the `main()` function.

**Description:**
- Given an array, rotate the elements by a given number of positions to the right.
- For example, if the array is `[1, 2, 3, 4, 5]` and the rotation step is `2`, the final array should be `[4, 5, 1, 2, 3]`.

**Steps:**
- Use a `for` loop to shift elements to the right for the given number of steps.
- Ensure that the program handles cases where the step is greater than the size of the array.

### Task 7: **Rearrange Array in Zigzag Order** `zigzag.cpp`
Rearrange the elements of an array in such a way that they follow a zigzag pattern (`arr[0] < arr[1] > arr[2] < arr[3]...`).

**Description:**
- Rearrange an array so that every alternate element is greater than its neighbors.
- For example, given the array `[4, 3, 7, 8, 6, 2, 1]`, the output should be `[3, 7, 4, 8, 2, 6, 1]`.

**Steps:**
- Traverse the array and swap adjacent elements if they don’t satisfy the zigzag condition.
- Use simple comparisons and a `for` loop to achieve this.


### Task 7: **Count Positive, Negative, and Zero Elements** `array_count.cpp`
Write a program that counts how many elements in an array are positive, negative, or zero.

**Description:**
- The program should count how many elements in the array are greater than zero, less than zero, or exactly zero.
- For example, if the array is `[1, -2, 0, 5, -3, 0]`, the program should output `2 positives`, `2 negatives`, and `2 zeros`.

**Steps:**
- Use a loop to go through the array and increment separate counters for positive, negative, and zero values.

