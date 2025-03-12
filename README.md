# Small C Standard Library Recreation

## About

This project is a small recreation of the C standard library, with additional helper functions for ease of use in other projects.

Notably, `get_next_line()` and `ft_printf()` are included to simplify file reading and formatted output handling.

## Dependencies

To compile and use this library, you need:

- A C compiler (`gcc` or `clang`)
- `make` (for building the library)

## Installation

Clone the repository and compile the library using `make`:

```sh
 git clone https://github.com/Nabil080/libft
```
```sh
 cd libft && make
 or
 make -C libft
```

This will generate the compiled library (`.a` file) inside the `libft/` directory.

## Usage

To use this library in your projects, the folder should be inside your project directory. Then, include the necessary headers and link the compiled library in your Makefile.

### Example

```c
#include "libft.h"

int main() {
    ft_printf("Hello, World!\n");
    return 0;
}
```

### Compilation

Modify your `Makefile` to compile and link the library:
```sh
cc {your-files} libft/libft.a -I libft -I libft/includes
```
Alternatively, using link flags:
```sh
cc {your-files} -Llibft -lft -I libft -I libft/includes
```

## Cleaning Up

To remove compiled files, run:

```sh
make clean
```
