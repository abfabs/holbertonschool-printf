<h1 align="center">_printf – Custom printf Function in C</h1>

---

## 1. Description

Our custom `_printf` is a simplified recreation of the standard C language `printf` function.

It processes a format string and prints formatted output to the standard output, supporting characters, strings, integers, and percentage symbols. This project demonstrates the use of variadic functions, function pointers and custom format specifier parsing in C.

### ▪ Function Prototype

```c
int _printf(const char *format, ...);
````

* `format`: A string that may contain regular characters and/or special instructions starting with %, called format specifiers, which direct how values should be printed.
* `...` : Variadic arguments corresponding to each format specifier

### ▪ Return Value

* Returns the total number of characters printed (excluding the null byte).
* Returns `-1` if:

  * `format` is `NULL`, or
  * the format string ends with an incomplete format specifier (e.g., `%` and no following character).




## 2. Key Functionalities

 Supported format specifiers:
- `%c` – Prints a character
- `%s` – Prints a string
- `%d` – Prints a signed decimal integer
- `%i` – Prints a signed decimal integer
- `%%` – Prints a percent sign

 
---

## 3. Compilation

To compile the project, the following command is used in the terminal:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf_test
```

## 4. Requirements

- GCC compiler
- Ubuntu 20.04 LTS or compatible environment
- C standard: `C89` (GNU89)
- Code style: **Betty** compliant

### Included Files:

- `_printf.c`: Core logic — parses format string and calls appropriate handlers
- `_putchar.c`: Low-level function to print one character to stdout
- `print_functions.c`: Contains all specifier handlers: `%c`, `%s`, `%d`, `%i`
- `main.h`: Header file with structs and function prototypes
- `main.c`: Test file with various usage examples

## 5. Examples and Testing

### Basic usage

```c
_printf("Hello, %s!\n", "world");
````

```plaintext
Hello, world!
```

### Print integers

```c
_printf("Number: %d\n", 1234);
_printf("Negative: %i\n", -5678);
```

```plaintext
Number: 1234
Negative: -5678
```

### Print a character

```c
_printf("First letter: %c\n", 'A');
```

```plaintext
First letter: A
```

### Print a percent symbol

```c
_printf("Progress: 100%% complete\n");
```

```plaintext
Progress: 100% complete
```

### NULL string handling

```c
_printf("This string is null: %s\n", NULL);
```

```plaintext
This string is null: (null)
```

### Invalid specifier handling

```c
_printf("Unknown specifier: %q\n");
```

```plaintext
Unknown specifier: %q
```

---

## 6. License

This project is for educational purposes only and is part of the **Holberton School** / *Holberton Basics* curriculum.

---

## 7. Authors

**Alba Eftimi**  
GitHub: [abfabs](https://github.com/abfabs)

**Sokol Gjeka**  
GitHub: [sokolgj19](https://github.com/sokolgj19)

---

<p align="center">
  <em>July 2025</em><br>
  <em>Tirana, Albania</em>
</p>

---


```
```
