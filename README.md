# DSA
# 🚀 DSA Mastery Journey: From Fundamentals to Advanced Patterns

Welcome to my Data Structures and Algorithms (DSA) repository! This space serves as a comprehensive log of my journey, tracking everything from core computational logic to advanced problem-solving techniques in C++. 

---

## 📌 Road Map & Curriculum

Below is the structured path followed in this repository, designed to build strong foundations before moving into complex algorithms.

| Section | Topic | Focus Area | Status |
| :---: | :--- | :--- | :---: |
| **01** | [Flowcharts & Pseudocode](#1-flowcharts--pseudocode) | Logic building, dry-running, problem solving | 🟢 Completed |
| **02** | [First Program in C++](#2-first-program-in-c) | Structure of C++, compilers, `main()` function | 🟢 Completed |
| **03** | [Input & Output](#3-input--output-in-c) | Streams (`cin`, `cout`), data types, and modifiers | 🟢 Completed |
| **04** | [Conditionals](#4-conditionals-if-else--else-if) | Decision-making (`if`, `else if`, `else`, `switch`) | 🟢 Completed |
| **05** | [Loops & Iteration](#5-loops--iteration) | `for`, `while`, and `do-while` control structures | 🟢 Completed |
| **06** | [Pattern Printing - Basics](#6-pattern-printing---basic-level) | Solid/Hollow rectangles, simple triangles | 🟢 Completed |
| **07** | [Pattern Printing - Intermediate](#7-pattern-printing---intermediate-level) | Inverted pyramids, number/character patterns | 🟢 Completed  |
| **08** | [Pattern Printing - Advanced](#8-pattern-printing---advanced--hard-level) | Palindromic pyramids, diamonds, Pascal's triangle | 🟢 Completed  |
| **09** | [Operators - Advanced](Theory + practical) | Topic | 🟡 In Progress |

```
---🟡 In Progress 
---🔴 Upcoming
```

## 📂 Section Breakdowns

### 1. Flowcharts & Pseudocode
Before writing code, we must think like a computer. This section focuses on translating real-world problems into visual logic and step-by-step algorithms.
* **Flowcharts:** Terminal, Input/Output, Processing, and Decision blocks.
* **Pseudocode:** Writing structural code in plain English.
* *Example code:* Finding the largest of three numbers, checking prime numbers.

### 2. First Program in C++
Setting up the boilerplate code, understanding standard namespaces, and breaking down how a C++ source file compiles into executable machine code.
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, DSA World!" << endl;
    return 0;
}
```
###3. Input & Output in C++Mastering how data enters and leaves our programs, alongside understanding variables, memory sizes, and data types (int, float, char, bool, double).
Using cin >> for user inputs.
Using cout << for displaying data.
Handling whitespace strings using getline().

###4. Conditionals (if, else, else if)Teaching the program how to make choices based on conditional expressions and logical operators (&&, ||, !).
* Checking if a number is even or odd.
* Grading systems using else if ladders.
* Code optimization by arranging conditions efficiently.

###5. Loops & IterationAutomating repetitive tasks. This folder deep-dives into execution control, boundary conditions, and avoiding infinite loops.
* while loop: When the number of iterations is unknown.
* for loop: Ideal for sequential, known iterations.
*  do-while loop: Executing at least once before checking the condition.
*  eyword handling: break and continue.

###🧱 The Pattern Printing Trilogy (Sections 6, 7 & 8)Pattern printing is the ultimate tool for mastering nested loops and visual matrix logic.
It transitions from basic grid manipulation to complex coordinate mapping.

###6. Pattern Printing - Basic LevelUnderstanding Rows and Columns ($i, j$ mapping).
* Solid Rectangle: Basic nested loop grid.
* Hollow Rectangle: Conditional boundary printing (i == 1 || i == n).
* Half Pyramid: Dependent inner loop controls (j <= i).

###7. Pattern Printing - Intermediate LevelHandling spaces and varying data types inside loops.
* Inverted Half Pyramid: Counting down loops.
* Numbered Pyramids: Printing loop counters instead of stars (*).
* Floyd's Triangle: Continuously increasing integer tracking across rows.

###8. Pattern Printing - Advanced & Hard LevelComplex algorithmic logic involving multiple sub-loops and symmetrical math.
* Butterfly Pattern: Multi-zone space and star calculations.
* Diamond Pattern: Symmetrical upper and lower inverted loops.
* Palindromic Pyramids: Counting down then counting up on the same line.

* PlaintextAdvanced Palindromic Pyramid Example:
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
🛠️ How to Compile and RunTo run any of the C++ code files locally, ensure you have a g++ compiler installed, then run the following commands in your terminal:Bash# Clone the repository
git clone [[https://github.com/jaiswarabhishek638/DSA.git](https://github.com/jaiswarabhishek638/DSA.git)]

# Navigate to the specific directory
cd 02_first_program

# Compile the file
g++ main.cpp -o program

# Execute the compiled binary
./program

📈 Goals
* [ ] Complete all advanced pattern programs.
* [ ] Move into Arrays, Vectors, and Time Complexity analyses.
* [ ] Maintain a daily commit streak to visualize growth.

⭐ Feel free to star this repository if you find my notes or logic workflows helpful!
