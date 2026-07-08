*This project has been created as part of the 42 curriculum by acamelo.*

# C Piscine C 00 - First Steps into C & Algorithmic Logic

## Description

**C 00** is the introductory project of the intensive 42 school C Piscine. Its primary objective is to break away from high-level abstractions and force a deep understanding of standard output manipulation, basic data types, structural flow control, and memory representation at the byte level.

Instead of relying on the standard library (`printf`, `iostream`), this module limits execution strictly to the system call `write`. By building everything from scratch—from displaying a single character to calculating complex, non-repeating combinations—this project serves as a foundational baseline for structural coding syntax, nested conditional loops, character mapping via **ASCII tables**, and handling basic data limits under the strict code constraints of the **42 Norm**.

---

## Instructions

### Prerequisites

To compile and execute these programs, you require a standard C compiler (`gcc` or `clang`) installed within a UNIX-like environment.

### Compiling and Testing

Unlike later 42 projects that utilize automated Makefiles, these early exercises are compiled individually. To make testing seamless, every directory contains an integrated `main.c` framework to verify operational logic instantly.

* **To compile a specific exercise using the standard 42 security flags:**
```bash
cc -Wall -Wextra -Werror ft_putchar.c -o test_program

```


* **To run the generated binary executable:**
```bash
./test_program

```



---

## Detailed Description of Exercises

Every exercise targets a specific fundamental concept of computer science logic. The functions are mapped out as follows:

### 1. Basic Character & Data Output

* **ex00: `ft_putchar.c**` – Replicates a fundamental output stream mechanism. It uses the `write` system call to output a single character to standard output (`stdout`).
* **ex01: `ft_print_alphabet.c**` – Displays the full lowercase alphabet in ascending order on a single line using a single loop based on ASCII decimal increments.
* **ex02: `ft_print_reverse_alphabet.c**` – Iterates backward through ASCII values to display the lowercase alphabet in descending order.
* **ex03: `ft_print_numbers.c**` – Prints digits from `0` to `9`. It reinforces the conceptual difference between the numerical integer value `0` and its character representation `48` in the ASCII table.
* **ex04: `ft_is_negative.c**` – A basic branch verification function that accepts an integer parameter and outputs `N` if the number is negative, or `P` if it is positive or zero.

### 2. Combinatorics & Stream Tracking

* **ex05: `ft_print_comb.c**` – Uses three nested loops to calculate and print all unique combinations of three different digits in ascending order (e.g., `012, 013, ... 789`). It prevents duplicate groupings like `102` or `210`.
* **ex06: `ft_print_comb2.c**` – Displays all unique combinations of two two-digit numbers ranging from `00` to `99` (e.g., `00 01, 00 02, ... 98 99`). This exercise builds deeper logical control over dual multi-nested loop frameworks.

### 3. Advanced Numerical Transformation & Recursion

* **ex07: `ft_putnbr.c**` – A foundational routine designed to display any signed integer passed as a parameter to the screen character by character. It processes sign changes and breaks down multi-digit figures using mathematical separation (modulo and division).
* **ex08: `ft_print_combn.c**` – An advanced combinatorics problem that displays all unique combinations of $n$ different digits in ascending order, where $0 < n < 10$. It shifts away from hardcoded nested structures to implement variable-depth logic.

---

## Technical Decisions & Challenges

### The Integer Edge-Case Boundary (`INT_MIN`)

During the development of `ft_putnbr`, a classic data architecture bug occurs when isolating the sign of a negative number. Multiplying a negative integer by `-1` to convert it to a positive value works for most numbers, but fails on the absolute lowest limit of a signed 32-bit integer (`-2147483648`). Because of Two's Complement representation, converting it to a positive number causes an integer overflow since `2147483648` exceeds `INT_MAX`.
To handle this safely without using external library headers, the function intercepts this specific edge case directly and prints its initial digits manually before letting the core loop process the rest safely.

### Array States & Dynamic Depth

Developing `ft_print_combn` required tracking positional offsets dynamically depending on the input size integer $n$. To solve this without advanced features, an array of size $n$ was implemented to maintain state information. The system manually checks array boundaries and increments positions sequentially, ensuring that each digit remains strictly greater than the one to its left.

---

## Resources

### References & Learning Materials

* **Unix Man Pages:** Leveraged `man 2 write` to grasp the underlying parameters, return values, and behavior of file descriptors during system interrupts.
* **ASCII Table Frameworks:** Utilized standard byte maps to handle calculations directly through character offsets (`'0' + (nb % 10)`) rather than using bloated string translation tables.
* **Cluster Peer Feedback:** Interacting with peers inside the 42 Madrid cluster was crucial for mapping out logical edge cases and identifying tricky corner-cases before running the official evaluation tests.

### AI Usage Statement

Artificial Intelligence was integrated into this project as a structural and educational advisor under the following rules:

* **Edge-Case Validation:** Used to check the algorithmic efficiency of nesting loops in `ex05` and `ex06` to avoid redundant cycles.
* **Technical Editing:** AI assisted in organizing, structuring, and polishing this technical `README.md` to guarantee clear presentation for recruiters and engineering peers ahead of the Web Summit.
* *Note: Every single line of code was written manually, line-by-line, adhering strictly to the 42 Norm guidelines.*