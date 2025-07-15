# _printf - Custom printf Function in C

---

## 1. Description

Our own handmade `_printf` is a simplified recreation of the standard C `printf` function.

It processes a format string and prints formatted output to the standard output, supporting characters, strings, integers, and percent symbols. This project demonstrates how to use variadic functions, function pointers, and custom format specifier parsing in C.

---

## 2. Key Functionalities

 Supported format specifiers:
- `%c` – Prints a character
- `%s` – Prints a string
- `%d` – Prints a signed decimal integer
- `%i` – Prints a signed decimal integer
- `%%` – Prints a percent sign

 Internal features:
- Function pointer dispatch using a `specifier_t` struct
- Graceful handling of `NULL` strings (`(null)`)
- Recursion for integer digit-by-digit output
- Clean fallback for unknown specifiers (prints `%` + character)

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
_printf("This is a null string: %s\n", NULL);
```

```plaintext
This is a null string: (null)
```

### Invalid specifier handling

```c
_printf("Unknown: %q\n");
```

```plaintext
Unknown: %q
```

---

## 6. License

This project is for educational purposes and is part of the Holberton School / **Holberton Basics** curriculum.

---

## 7. Authors

**Alba Eftimi**  
 https://github.com/abfabs/

**Sokol Gjeka**  
 https://github.com/sokolgj19/
 

Feel free to explore, contribute, or fork the project!
---
July, 2025,
Tirana, Albania

---

```
```