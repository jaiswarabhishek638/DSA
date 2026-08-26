# DSA with CODERARMY
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
| **05** | [Loops & Iteration](#5-for-loops) | `for`, `while`, and `do-while` control structures | 🟢 Completed |
| **06** | [Pattern Printing - Basics](#6-pattern-printing---basic-level) | Solid/Hollow rectangles, simple triangles | 🟢 Completed |
| **07** | [Pattern Printing - Intermediate](#7-pattern-printing---intermediate-level) | Inverted pyramids, number/character patterns | 🟢 Completed  |
| **08** | [Pattern Printing - Advanced](#8-pattern-printing---advanced--hard-level) | Palindromic pyramids, diamonds, Pascal's triangle | 🟢 Completed  |
| **09** | [Operators - Advanced ](#9-BODMAS-Arithmetic-1.Urinary-2.Binary-Comparision-Logical-Bitwise-Assignment--operator) | Operators | 🟢 Completed |
| **10** | [Loop Advanced](#10-switch-do-while-break-continue-scope-of-variable) `while`, and `do-while` control structures | Loop Advanced | 🟢 Completed   |
| **11** | [Number System Conversion](#11-Number-system-conversion-binary-octal-decimal-viceversa) | Number System for Computer | 🟢 Completed   |
| **13** | [Function](#13-Function-callbyvalue-callbyreference-&-swapbyreference-using&---method-overloading) | call by reference, value,method overloading | 🟢 Completed |
| **15** | [ARRAY](#15-Arraysame-datatype-cointiguous-memory-loctn) | memory consumption in array,sizeof(),0 based vs 1 based index, 32 vs 64 byte processor| 🟢 Completed  |
| **16** | [Sorting](#16-sorting-selection-bubble-insertion) | sorting- Selection , insertion , bubble sort | 🟢 Completed  |
| **17** | [ARRAY Algorithm](#17-Binarysearch-SLT-2Pointer-subarray-suffix-prefix) | Binarysearch, SLT,2Pointer ,subarray ,suffix,prefix | 🟢 Completed   |
| **18** | [2D ARRAY Algorithm](#18-2d-array-matrix-reverse-sum/multi-matrix) | Matrix, reverse,sumof 2d array, vector<vector<int>> matrix | 🟢 Completed  |
| **19** | [String](#19-DAY-1-string-getline-for-paragraph,append,size,escape,pangram,rotatedby-2-place,defanging-an-ip,sort-a-string) | Getline(paragraph), size(), append(2string add), Escape char, pangram, rotatedby-2-place, defanging-an-ip, sort-a-string | 🟢 Completed  |
```
---🟡 In Progress 
---🔴 Upcoming
```
problem1: defanging an ip address
problem2: check if the string is rotated by 2 place or not
problem3: check pangram
problem4: sort a string With the TimeComplexity is O(n).

## 📂 Section Breakdowns

## 1. Flowcharts & Pseudocode
Before writing code, we must think like a computer. This section focuses on translating real-world problems into visual logic and step-by-step algorithms.
* **Flowcharts:** Terminal, Input/Output, Processing, and Decision blocks.
* **Pseudocode:** Writing structural code in plain English.
* *Example code:* Finding the largest of three numbers, checking prime numbers.

## 2. First Program in C++
Setting up the boilerplate code, understanding standard namespaces, and breaking down how a C++ source file compiles into executable machine code.
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, DSA World!" << endl;
    return 0;
}
``` 

## 3. Input & Output in C++Mastering how data enters and leaves our programs, alongside understanding variables, memory sizes, and data types (int, float, char, bool, double).
Using cin >> for user inputs.
Using cout << for displaying data.
Handling whitespace strings using getline().

## 4. Conditionals (if, else, else if)Teaching the program how to make choices based on conditional expressions and logical operators (&&, ||, !).
* Checking if a number is even or odd.
* Grading systems using else if ladders.
* Code optimization by arranging conditions efficiently.

## 5. Loops & IterationAutomating repetitive tasks. This folder deep-dives into execution control, boundary conditions, and avoiding infinite loops.
* while loop: When the number of iterations is unknown.
* for loop: Ideal for sequential, known iterations.
*  do-while loop: Executing at least once before checking the condition.
*  eyword handling: break and continue.

## 🧱 The Pattern Printing Trilogy (Sections 6, 7 & 8)Pattern printing is the ultimate tool for mastering nested loops and visual matrix logic.
It transitions from basic grid manipulation to complex coordinate mapping.

## 6. Pattern Printing - Basic LevelUnderstanding Rows and Columns ($i, j$ mapping).
* Solid Rectangle: Basic nested loop grid.
* Hollow Rectangle: Conditional boundary printing (i == 1 || i == n).
* Half Pyramid: Dependent inner loop controls (j <= i).

## 7. Pattern Printing - Intermediate LevelHandling spaces and varying data types inside loops.
* Inverted Half Pyramid: Counting down loops.
* Numbered Pyramids: Printing loop counters instead of stars (*).
* Floyd's Triangle: Continuously increasing integer tracking across rows.

## 8. Pattern Printing - Advanced & Hard LevelComplex algorithmic logic involving multiple sub-loops and symmetrical math.
* Butterfly Pattern: Multi-zone space and star calculations.
* Diamond Pattern: Symmetrical upper and lower inverted loops.
* Palindromic Pyramids: Counting down then counting up on the same line.

* PlaintextAdvanced Palindromic Pyramid Example:
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4

## 9. Operators
* #1. Comparision operators  
* #4 arithmetic operator
```cpp
int main(){
    // comparision operator 
    // 1/0
    int x,y;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    // check whether the value is equal or not
    if(x!=y){
        cout<<x<<" and "<<y<<" are not equal and"<<endl;
        if(x>y){
            cout<<x<<" is greater"<<endl;
        }
        else{
            cout<<y<<" is greater"<<endl;
        }
    }
    else cout<<x <<" and "<<y<<" are equal"<<endl;
}
```
* #2.Logical operators
```cpp
int main(){
    int a,b,c;
    cout<<"Enter the first value: ";
    cin>>a;
    cout<<"Enter the second value: ";
    cin>>b;
    cout<<"Enter the third value: ";
    cin>>c;
    if(a>b && a>c){
        cout<<"a is greater"<<endl;
    }else if(b>c){
        cout<<"b is greater"<<endl;
    }
    else{
        cout<<"c is greater"<<endl;
    }
}
```
#3.Bitwise Operator
```cpp
int main(){
    // & bitwise operator
    int ans = 2 & 3;
    // 2 = 10 & 3 = 11 
    // 1 0 
    // 1 1
    // ans 1 0 = 2
    cout<<ans<<endl; //2 

    // | bitwise operator 
    int Orr = 2 | 3;
    // 2 = 1 0
    // 3 = 1 1
    //     1 1 = 3
    cout<<Orr<<endl;//3

    // ^ bitwise operator
    int NotO = 2^ 3;
    // 2 = 1 0
    // 3 = 1 1
    //     0 1 = 1
    cout<<NotO<<endl;//1

    // << (left shift operator)
    int leftSh=9<<3;
    // formula num * 2^x;
    // 9 * 2^3 =72
    cout<<leftSh<<endl;//72

    // >> (right shift operator)
    int rightSh=32>>4;
    // formula num /x^2;
    // 27 / 3^2 = 1;
    cout<<rightSh<<endl;//1

    
}
```

## 10. 📚 What I Covered:
* **While & Do-While Loops:** Masters of conditional repetition. Explored the entry-controlled nature of `while` vs. the exit-controlled nature of `do-while`.
* **The `do-while` Disadvantage:** Realised how a `do-while` loop executes code at least once before checking conditions, which can lead to logical bugs if data inputs (like `0`) are not explicitly guarded.
* **Jump Statements (`break` & `continue`):** 
  * `break` exits a loop instantly when a target element is found.
  * `continue` skips the current iteration and jumps directly to the condition or update stage.
* **Switch-Case Matrix:** Cleanly mapped matching integers and characters to clear actions while avoiding structural constraints.
* **Scope of Variables:** Understood local vs. global scopes, variable lifetimes inside curly braces `{}`, and how redeclaration flags errors inside the exact same execution block.

---
# 🛠️ Practical Implementations Completed:
1. **Factors of a Number:** Wrote an optimised `while` loop tracking zero-remainders (`n % i == 0`) to extract all factors sequentially.
2. **Dynamic Multiplication Tables:** Implemented simple arithmetic iterators to generate standard custom tables.
3. **Loop Control Optimization:** Applied the `continue` statement to systematically filter and skip multi-factor iterations without breaking program runtime.

* **Learning :- Today's learning dive in the #180DaysOfCode challenge was all about mastering C++ Loops, Jump Statements, and Memory Scoping Rules. 

Here is a quick snapshot of what I cracked today:

🔹 Entry vs. Exit Control: Deep-dived into the structural tradeoffs of 'while' vs. 'do-while'. I explored how 'do-while' loops can accidentally leak logic by running at least once before testing conditions—vital to remember when tracking absolute parameters.

🔹 Controlling Flow Safely: Worked with 'break' to structurally quit iterations early and 'continue' to selectively bypass custom logic flags (like filtering numbers or optimizing prime checks) without terminating loop execution.

🔹 Variable Scoping & Lifetimes: Demystified how C++ allocates boundaries inside block curly braces {}. Learned how compilers resolve nested lookup paths and prevent variable redefinition crashes in identical scopes.

💡 Applied these concepts to build programmatic factor-finders, mathematical tables, and optimized conditional filters. 


# 💡 Logic Overview

## 1. Decimal to Binary
* Extract remainder using `N % 2` or `N & 1`.
* Shift bits/divide by 2 using `N / 2` or `N >> 1`.
* Accumulate result: $\text{Ans} = \text{Ans} + (\text{Remainder} \times 10^i)$.

## 2. Binary to Decimal
* Extract binary digits using `N % 10`.
* Accumulate result: $\text{Ans} = \text{Ans} + (\text{Digit} \times 2^i)$.
* Divide number by 10 (`N / 10`) until zero.

## 3. Indirect Conversions (e.g., Binary to Octal)
Instead of direct string mapping, convert to intermediate **Decimal**, then transform to the target base.

---

## ⚡ Bitwise vs Arithmetic Comparison

| Approach | Digit Extraction | Division / Shift | Performance |
| :--- | :--- | :--- | :--- |
| **Arithmetic** | `N % 2` | `N / 2` | Standard |
| **Bitwise** | `N & 1` | `N >> 1` | Faster (Hardware-Level) |

# Day11: Number System Conversions in C++

## A complete guide and implementation of number base conversions using direct arithmetic and bitwise optimization techniques in C++.

## 📌 Features Included
* **Decimal ↔ Binary**: Converts numbers using standard modulo/division (`% 2`, `/ 2`) and bitwise operators (`& 1`, `>> 1`).
* **Decimal ↔ Octal**: Base-8 digit extraction and place-value reconstruction.
* **Binary ↔ Octal**: Inter-base conversion routed via Decimal (`Binary → Decimal → Octal`).

# Day13:Function in c++
## Topics Covered1. 
* Call by Value vs. Call by Reference
* Understanding how data is passed into functions and its impact on performance and memory.
* Call by Value: Creates a local copy of the argument. Changes made inside the function do not affect the original variable.
* Call by Reference: Passes an alias (&) to the original argument. Changes made inside the function directly update the original variable.
* 2. Function OverloadingHow to define multiple functions with the same name to improve code readability and reusability.
* Criteria: Functions must have different numbers or types of parameters.Limitation: Changing only the return type is not allowed.
* Code ExamplesParameter Passing

```cpp
#include <iostream>
using namespace std;

void modifyByValue(int x) {
    x = 100; 
}

void modifyByReference(int &x) {
    x = 100; 
}

int main() {
    int num1 = 20;
    int num2 = 20;

    modifyByValue(num1);
    cout << "After call by value: " << num1 << endl; // Output: 20

    modifyByReference(num2);
    cout << "After call by reference: " << num2 << endl; // Output: 100

    return 0;
}
Use code with caution.Overloading (overloading.cpp)cpp#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Int addition: " << add(5, 10) << endl;       // Outputs: 15
    cout << "Double addition: " << add(2.5, 3.5) << endl; // Outputs: 6.0
    return 0;
}
```


  
## 🛠️ How to Compile and RunTo run any of the C++ code files locally, ensure you have a g++ compiler installed, then run the following commands in your terminal:Bash# Clone the repository
git clone [[https://github.com/jaiswarabhishek638/DSA.git](https://github.com/jaiswarabhishek638/DSA.git)]

# Navigate to the specific directory
cd 02_first_program

# Compile the file
g++ main.cpp -o program

# Execute the compiled binary
./program

#📈 Goals
* [ ] Complete all advanced pattern programs.
* [ ] Move into Arrays, Vectors, and Time Complexity analyses.
* [ ] Maintain a daily commit streak to visualize growth.

⭐ Feel free to star this repository if you find my notes or logic workflows helpful!
