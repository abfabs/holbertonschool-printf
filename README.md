<h1 align="center">_printf – Custom printf Function in C</h1>

<h2 align="center">1. Description</h2>

For this week's project, our team built a simplified version of the C printf function called _printf. The goal was understanding how formatted output actually works, instead of just using the standard library version. The function loops through whatever string you give it and, whenever it sees a percent sign, it figures out what to do based on the next character.

We had to connect a few ideas in C to make it all work, like pointers, structures, and variadic functions. For each type of value (like a character or an integer), there’s a separate function that knows how to print it. 

We made a custom struct to match each specifier with the function that handles it, and stored all of those in an array, so when _printf sees something like %d, it uses that array to find the right function and call it. The rest of the time, it just prints the characters as they are. We also handled edge cases like double percentage signs or null strings. Finally, our custom function adds up how many characters were printed and returns that number.

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


<h2 align="center">2. Key Functionalities</h2>

 Supported format specifiers:
- `%c` – Prints a character
- `%s` – Prints a string
- `%d` – Prints a signed decimal integer
- `%i` – Prints a signed decimal integer
- `%%` – Prints a percent sign
 

<h2 align="center">3. Compilation</h2>

To compile the project, the following command is used in the terminal:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf_test
```

<h2 align="center">4. Requirements</h2>

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

<h2 align="center">5. Examples and Testing</h2>

### Basic usage

```c
_printf("Hello, %s!\n", "from Tirana");
````

```plaintext
Hello, from Tirana!
```

### Print integers

```c
_printf("Number: %d\n", 1711);
_printf("Negative: %i\n", -2025);
```

```plaintext
Number: 1711
Negative: -2025
```

### Print a character

```c
_printf("Alpha letter: %c\n", 'A');
```

```plaintext
Alpha letter: A
```

### Print a percentage symbol

```c
_printf("Progress: 100%% complete.\n");
```

```plaintext
Progress: 100% complete.
```

### NULL string handling

```c
_printf("This string should be null: %s\n", NULL);
```

```plaintext
This string should be null: (null)
```

### Invalid specifier handling

```c
_printf("Unknown specifier: %q\n");
```

```plaintext
Unknown specifier: %q
```

<h2 align="center">6. License</h2>

This project is for educational purposes only and is part of the **Holberton School** / *Holberton Basics* curriculum.


<h2 align="center">7. Authors</h2>

<strong>Alba Eftimi</strong> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; <strong>Sokol Gjeka</strong>  
GitHub: <a href="https://github.com/abfabs">abfabs</a> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; GitHub: <a href="https://github.com/sokolgj19">sokolgj19</a>


<p align="center">
  <em>July 2025</em><br>
  <em>Tirana, Albania</em>
</p>

```
```
