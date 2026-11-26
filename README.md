# C Programming - 1st Semester

MIT-ADT C Programming lab programs, written in C. Experiments 01–25 follow the corresponding requirements in the 2026–27 lab manual.

| File | Experiment |
|---|---|
| `Program01.c` | Basic input and output using int, float, char and double |
| `Program02.c` | Area of a circle |
| `Program03.c` | Average of three numbers |
| `Program04.c` | Swap two numbers using a temporary variable |
| `Program05.c` | Single-line and multi-line comments |
| `Program06.c` | Operator precedence and associativity |
| `Program07.c` | Check whether a number is even or odd |
| `Program08.c` | Check whether a number is positive, negative or zero |
| `Program09.c` | Menu-driven calculator using switch-case |
| `Program10.c` | Multiplication table using while, do-while and for loops |
| `Program11.c` | Integer, float and character arrays with element addresses |
| `Program12.c` | Sum of elements in a one-dimensional array |
| `Program13.c` | Addition of two matrices |
| `Program14.c` | Factorial using a user-defined function |
| `Program15.c` | Triangle area using four types of user-defined functions |
| `Program16.c` | Student structure, three subject marks, total and average |
| `Program17.c` | Union with integer, float and character members |
| `Program18.c` | Employee records using an array of structures |
| `Program19.c` | String length and reverse without built-in string functions |
| `Program20.c` | String copy, reverse, length, comparison and concatenation |
| `Program21.c` | Integer value and address using a pointer |
| `Program22.c` | Values and addresses through a double pointer |
| `Program23.c` | Exchange two values using pointers (call by reference) |
| `Program24.c` | Write student details to a file, then read and display them |
| `Program25.c` | Count lines in a text file |

Compile an individual program with GCC, for example:

```sh
gcc -std=c11 -Wall -Wextra -pedantic Program16.c -o Program16
```

Run each program from a folder where it can create or read its data files. `Program24.c` creates `student.txt` in the current folder. `Program25.c` asks for the text file to count.

In `Program20.c`, standard C string functions handle copy, length, comparison and concatenation. Reversal uses a short in-place loop because `strrev()` is not part of standard C; this matches the manual's portable fallback.
