# ⚙️ Factorial Calculator in C++ (Using While Loop)

> A simple yet effective C++ program that computes the factorial of a user-provided positive integer using an iterative while loop.

---

## 📋 Overview

This program demonstrates the calculation of factorials in C++ using a `while` loop. The factorial of a non-negative integer `n` (denoted as `n!`) is the product of all positive integers less than or equal to `n`. 

This implementation uses an iterative approach, which is efficient, easy to understand, and avoids the overhead of recursion.

**Mathematical Formula:**
`n! = n × (n-1) × (n-2) × ... × 1`
*(Note: 0! = 1 by definition)*

---

## 🧮 Program Logic & Execution Flow

1. The user is prompted to enter a positive integer.
2. Two variables are initialized:
   - `factorial = 1` (to store the result)
   - `i = 1` (loop counter)
3. A `while` loop runs from `i = 1` to `i <= n`.
4. Inside the loop, `factorial` is multiplied by `i` in each iteration.
5. The loop counter `i` is incremented.
6. The final factorial value is displayed on the console.

---

## 💻 Sample Input / Output

**Input:**
Enter a positive integer: 5

text

**Output:**
The factorial of 5 is 120

text

**Input:**
Enter a positive integer: 0

text

**Output:**
The factorial of 0 is 1

text

---

## 🛠️ How to Compile and Run (Windows & Linux)

Follow the instructions below based on your operating system.

### 🪟 For Windows Users (Using MinGW/G++ or any C++ compiler)
| Step | Command |
| :---: | :--- |
| **1. Compile** | `g++ factorial_while.cpp -o factorial_while.exe` |
| **2. Run** | `factorial_while.exe` |

> **Note:** If `g++` is not recognized, make sure MinGW is installed and added to your System PATH.

---

### 🐧 For Linux / macOS Users (Terminal)
| Step | Command |
| :---: | :--- |
| **1. Compile** | `g++ factorial_while.cpp -o factorial_while` |
| **2. Run** | `./factorial_while` |

> **Prerequisite:** Ensure GCC/G++ is installed on your system. (On Linux: `sudo apt install g++` | On macOS: `xcode-select --install`)

---

## 📂 Project Structure
cpp-factorial-using-while-loop/
│
├── factorial_while.cpp # Main source code file
└── README.md # Project documentation (this file)

text

---

## 👩‍💻 Author

**Iqra Maqsood Mughal**  
*C++ Developer | Programming Enthusiast*

---

## 📅 Date

**August 2, 2026**

---

## 📄 License

This project is open-source and intended for educational purposes.

---
