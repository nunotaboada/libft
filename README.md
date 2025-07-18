# libft

The `libft` project is a cornerstone of the 42 curriculum, designed to deepen your understanding of C programming by recreating essential standard library functions and building custom utilities. This project challenges you to implement a robust library that will serve as a foundation for future assignments, providing reusable functions for string manipulation, memory handling, and linked list operations.

By crafting `libft`, you gain insight into how standard C functions work under the hood, while also creating practical tools tailored for efficient coding. This project includes both mandatory functions (mimicking standard C library functions and additional utilities) and bonus functions for linked list manipulation. Additionally, an extended version, `libftall`, includes extra functions.


## Project Structure
- **Source Files**: Located in the root directory, organized into mandatory and bonus functions.
- **Header**: `libft.h` defines function prototypes and necessary structures (e.g., `t_list` for linked lists).
- **Makefile**: Supports compilation with rules for `all`, `bonus`, `clean`, `fclean`, and `re`.
- **Library**: Compiles into `libft.a`, a static library for linking with other programs.
- **Extended Library**: `libftall` includes additional functions not part of the original `libft` requirements.

---

## Implemented Functions

### Standard C Library Functions
These functions replicate the behavior of their counterparts in the C standard library, providing essential utilities for string, memory, and character operations:

- `ft_atoi` - Converts a string to an integer.
- `ft_bzero` - Sets a block of memory to zero.
- `ft_calloc` - Allocates memory for an array and initializes it to zero.
- `ft_isalnum` - Checks if a character is alphanumeric.
- `ft_isalpha` - Checks if a character is alphabetic.
- `ft_isascii` - Checks if a character is in the ASCII range.
- `ft_isdigit` - Checks if a character is a digit.
- `ft_isprint` - Checks if a character is printable.
- `ft_memchr` - Locates a byte in a memory block.
- `ft_memcmp` - Compares two memory blocks.
- `ft_memcpy` - Copies a memory block.
- `ft_memmove` - Copies a memory block, handling overlapping regions.
- `ft_memset` - Fills a memory block with a specified byte.
- `ft_strchr` - Locates a character in a string.
- `ft_strdup` - Duplicates a string.
- `ft_strlcat` - Concatenates strings with size restrictions.
- `ft_strlcpy` - Copies strings with size restrictions.
- `ft_strlen` - Calculates the length of a string.
- `ft_strncmp` - Compares strings up to a specified length.
- `ft_strnstr` - Locates a substring within a string.
- `ft_strrchr` - Locates the last occurrence of a character in a string.
- `ft_tolower` - Converts a character to lowercase.
- `ft_toupper` - Converts a character to uppercase.

### Custom Utility Functions
These additional functions provide powerful string and output manipulation capabilities, designed to enhance the library's versatility:

- **`ft_substr`**  
  ```c
  char *ft_substr(char const *s, unsigned int start, size_t len)
  ```
  Allocates memory and returns a substring from `s`, starting at index `start` with a maximum length of `len`.

- **`ft_strjoin`**  
  ```c
  char *ft_strjoin(char const *s1, char const *s2)
  ```
  Allocates memory and returns a new string concatenating `s1` and `s2`.

- **`ft_strtrim`**  
  ```c
  char *ft_strtrim(char const *s1, char const *set)
  ```
  Allocates memory and returns a copy of `s1` with characters from `set` removed from the start and end.

- **`ft_split`**  
  ```c
  char **ft_split(char const *s, char c)
  ```
  Allocates memory and returns an array of strings by splitting `s` using `c` as a delimiter. The array ends with a `NULL` pointer.

- **`ft_itoa`**  
  ```c
  char *ft_itoa(int n)
  ```
  Allocates memory and returns a string representation of the integer `n`, handling negative numbers.

- **`ft_strmapi`**  
  ```c
  char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
  ```
  Applies function `f` to each character of `s` with its index, creating a new string with the results.

- **`ft_striteri`**  
  ```c
  void ft_striteri(char *s, void (*f)(unsigned int, char*))
  ```
  Applies function `f` to each character of `s` with its index, modifying the string in place.

- **`ft_putchar_fd`**  
  ```c
  void ft_putchar_fd(char c, int fd)
  ```
  Outputs the character `c` to the specified file descriptor.

- **`ft_putstr_fd`**  
  ```c
  void ft_putstr_fd(char *s, int fd)
  ```
  Outputs the string `s` to the specified file descriptor.

- **`ft_putendl_fd`**  
  ```c
  void ft_putendl_fd(char *s, int fd)
  ```
  Outputs the string `s` to the specified file descriptor, followed by a newline.

- **`ft_putnbr_fd`**  
  ```c
  void ft_putnbr_fd(int n, int fd)
  ```
  Outputs the integer `n` to the specified file descriptor.

### Bonus Functions - Linked List Manipulation
These functions provide tools for working with singly linked lists, using the `t_list` structure:

- **`ft_lstnew`**  
  ```c
  t_list *ft_lstnew(void *content)
  ```
  Allocates and returns a new node with the given `content` and `next` set to `NULL`.

- **`ft_lstadd_front`**  
  ```c
  void ft_lstadd_front(t_list **lst, t_list *new)
  ```
  Adds the node `new` at the beginning of the list.

- **`ft_lstsize`**  
  ```c
  int ft_lstsize(t_list *lst)
  ```
  Returns the number of nodes in the list.

- **`ft_lstlast`**  
  ```c
  t_list *ft_lstlast(t_list *lst)
  ```
  Returns the last node of the list.

- **`ft_lstadd_back`**  
  ```c
  void ft_lstadd_back(t_list **lst, t_list *new)
  ```
  Adds the node `new` at the end of the list.

- **`ft_lstdelone`**  
  ```c
  void ft_lstdelone(t_list *lst, void (*del)(void*))
  ```
  Frees the node’s content using the `del` function and frees the node.

- **`ft_lstclear`**  
  ```c
  void ft_lstclear(t_list **lst, void (*del)(void*))
  ```
  Deletes and frees the given node and all successors, setting the list pointer to `NULL`.

- **`ft_lstiter`**  
  ```c
  void ft_lstiter(t_list *lst, void (*f)(void *))
  ```
  Applies function `f` to the content of each node in the list.

- **`ft_lstmap`**  
  ```c
  t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
  ```
  Creates a new list by applying function `f` to each node’s content, with `del` used to free content if needed.

### Extended Functions in `libftall`
The `libftall` version includes all the above functions plus additional utilities not part of the original `libft` requirements:

- **`ft_atol`**  
  ```c
  long ft_atol(const char *str)
  ```
  Converts a string to a `long` integer, extending the functionality of `ft_atoi`.

- **`ft_split_old`**  
  ```c
  char **ft_split_old(char *str, char c)
  ```
  An alternative implementation of `ft_split`, not part of the original `libft` specification. It provides a different approach to splitting strings, focusing solely on the delimiter `c` without additional whitespace handling.

- **`get_next_line`**  
  ```c
  char *get_next_line(int fd)
  ```
  Reads a line from a file descriptor, useful for projects requiring line-by-line input processing.

**Note**: `ft_split_old` is included as an alternative to `ft_split` but is not part of the standard `libft` project requirements. It serves as a variant implementation for specific use cases or testing purposes.

---

## Compilation
To compile the library, use the provided Makefile:

- `make`: Builds `libft.a` with mandatory functions.
- `make bonus`: Includes bonus linked list functions.
- `make clean`: Removes object files.
- `make fclean`: Removes object files and `libft.a`.
- `make re`: Rebuilds the library from scratch.

For `libftall`, use the corresponding Makefile to include the extended functions.

---

## Usage
1. Include the header in your C files:
   ```c
   #include "libft.h"
   ```
2. Link the library during compilation:
   ```bash
   gcc -o program program.c -L. -lft
   ```

---

## Author
- **Name**: Nuno Taboada
- **Email**: nunotaboada@gmail.com

This project was completed as part of the 42 school curriculum