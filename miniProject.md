# 🏦 Campus Bank ATM System (C++ Mini Project)

## 📘 Project Overview

You have been hired as a **junior software developer** to help build a **simple ATM system** for a campus bank. The system will run in the **terminal (console)** and allow users to create accounts, log in, and perform basic banking operations.

This project is designed to help you **apply everything you have learned so far in C++** and also encourage you to explore new ideas like **structs and functions**.

---

## 🎯 Learning Objectives

By completing this project, you should be able to:

* Use `if / else` statements for decision-making
* Use `for` and `while` loops effectively
* Work with arrays and strings
* Group related data using `struct`
* Design a simple, menu-driven program
* Think logically and write clean, readable code

---

## 🛠️ Project Requirements

### 1️⃣ Account Storage

The bank can store **up to 5 customer accounts**.

Each account must have:

* Full Name (string)
* Account Number (string)
* PIN (int)
* Balance (double)

You **must use a `struct`** to represent a bank account.

---

### 2️⃣ Main Menu (Program Must Loop)

When the program starts, display the following menu:

```
WELCOME TO CAMPUS BANK
1. Create Account
2. Login
3. Exit
Choose an option:
```

* The menu should keep appearing until the user chooses **Exit**.

---

### 3️⃣ Create Account

When the user selects **Create Account**:

* Ask for:

  * Full name
  * Account number
  * PIN
  * Initial deposit
* Store the data in the account array

⚠️ Rules:

* Do not allow more than **5 accounts**
* Do not allow **duplicate account numbers**

---

### 4️⃣ Login System

When the user selects **Login**:

* Ask for:

  * Account number
  * PIN
* Check the entered details against stored accounts

If login is successful → display the **User Menu**
If login fails → display an error message

---

### 5️⃣ User Menu (After Login)

Once logged in, show the following menu:

```
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Change PIN
5. Logout
```

The user should remain in this menu until they choose **Logout**.

---

### 6️⃣ Banking Operations

#### ✅ Check Balance

* Display the user’s current balance

#### 💰 Deposit Money

* Ask for an amount
* Add it to the balance

#### 💸 Withdraw Money

* Ask for an amount
* Ensure:

  * Amount is positive
  * Amount does not exceed balance

#### 🔐 Change PIN

* Ask for a new PIN
* Update the stored PIN

---

## 📌 Program Rules

* Use only concepts learned so far:

  * `if / else`
  * loops
  * arrays
  * strings
  * `struct`
  * functions
* The program must not crash on invalid input
* Display clear and user-friendly messages
* Code should be **well-indented and commented**

---


## 📂 Submission Instructions

* Upload your project to **GitHub**

  ```
  campusBank_atm.cpp
  ```

---

## 🧠 Final Note

This project is not about writing perfect code — it is about **thinking like a programmer**.

Build something that works, improve it step by step, and enjoy the process 🚀

Good luck, and happy coding!
