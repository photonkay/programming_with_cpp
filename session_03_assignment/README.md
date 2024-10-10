# Programming/Coding Tasks For Session 03

These are your coding tasks for practice on debugging, the use of arrays and strings.

Tasks 1 - 5 : You are required to debug the codes.

---

### Task 6: **Rotate an Array** `rotate_array.cpp`
Rotate an array of integers to the right by a given number of steps within the `main()` function.

**Description:**
- Given an array, rotate the elements by a given number of positions to the right.
- For example, if the array is `[1, 2, 3, 4, 5]` and the rotation step is `2`, the final array should be `[4, 5, 1, 2, 3]`.

**Steps:**
- Use a `for` loop to shift elements to the right for the given number of steps.
- Ensure that the program handles cases where the step is greater than the size of the array.

---

### Task 7: **Rearrange Array in Zigzag Order** `zigzag.cpp`
Rearrange the elements of an array in such a way that they follow a zigzag pattern (`arr[0] < arr[1] > arr[2] < arr[3]...`).

**Description:**
- Rearrange an array so that every alternate element is greater than its neighbors.
- For example, given the array `[4, 3, 7, 8, 6, 2, 1]`, the output should be `[3, 7, 4, 8, 2, 6, 1]`.

**Steps:**
- Traverse the array and swap adjacent elements if they don’t satisfy the zigzag condition.
- Use simple comparisons and a `for` loop to achieve this.

---

### Task 8: **Count Positive, Negative, and Zero Elements** `array_count.cpp`
Write a program that counts how many elements in an array are positive, negative, or zero.

**Description:**
- The program should count how many elements in the array are greater than zero, less than zero, or exactly zero.
- For example, if the array is `[1, -2, 0, 5, -3, 0]`, the program should output `2 positives`, `2 negatives`, and `2 zeros`.

**Steps:**
- Use a loop to go through the array and increment separate counters for positive, negative, and zero values.

---

### Task 9: Count Words in a Sentence `word_count.cpp`

Write a C++ program that takes a sentence as input and counts the number of words in the sentence. Words are assumed to be separated by one or more spaces.

**Input:**
- A string that represents the sentence. For example:
  ```
  Welcome to C++ programming
  ```

**Output:**
- The number of words in the sentence.
  ```
  Word count: 4
  ```

**Requirements:**
- You are not allowed to use any string manipulation library functions like `std::stringstream`.
- The program should handle multiple spaces between words.

---

### Task 10: Check if a String is a Palindrome `is_palindrome.cpp`

Write a C++ program that checks if a given string is a palindrome. A string is a palindrome if it reads the same backward as forward. The program should ignore spaces and case differences.

**Input:**
- A string input from the user. For example:
  ```
  madam
  ```

**Output:**
- If the string is a palindrome, print:
  ```
  The string is a palindrome.
  ```
- Otherwise, print:
  ```
  The string is not a palindrome.
  ```

**Requirements:**
- Ignore spaces and case sensitivity (e.g., "Race car" should be considered a palindrome).
- No built-in functions like `std::reverse()` should be used to reverse the string.

---

### Task 11: Reverse a String `string_reverse.cpp`

Write a C++ program that takes a string as input from the user and prints the string in reverse order.

**Input:**
- A string input from the user. For example:
  ```
  hello
  ```

**Output:**
- The reversed string:
  ```
  Reversed string: olleh
  ```

**Requirements:**
- Do not use any built-in functions like `strrev()` to reverse the string.
- Handle both upper and lowercase letters properly.
