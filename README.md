## Libft - Custom C Library for 42 Projects

This repository contains the first project of the 42 core curriculum: **Libft**, a custom C library with essential functions for character, string, memory, and file manipulation to be used across future projects.

### Function Categories and Descriptions

- **Character & String Checks**:
  - `ft_isalpha`: Alphabetic character test.
  - `ft_isdigit`: Decimal-digit character test.
  - `ft_isalnum`: Alphanumeric character test.
  - `ft_isascii`: Test for ASCII character.
  - `ft_toupper`: Lower case to upper case letter conversion.
  - `ft_tolower`: Upper case to lower case letter conversion.

- **String Manipulation**:
  - `ft_strlen`: Find the length of the string.
  - `ft_strlcpy`: Size-bounded string copying.
  - `ft_strlcat`: Size-bounded string concatenation.
  - `ft_strchr`: Locate the character in the string (first occurrence).
  - `ft_strrchr`: Locate the character in the string (last occurrence).
  - `ft_strncmp`: Compare strings (size-bounded).
  - `ft_strnstr`: Locate a substring in a string (size-bounded).
  - `ft_substr`: Extract substring from a string.
  - `ft_strjoin`: Concatenate two strings into a new string (with malloc).
  - `ft_strtrim`: Trim the beginning and end of the string with the specified characters.
  - `ft_split`: Split string, with specified character as delimiter, into an array of strings.
  - `ft_strmapi`: Create a new string by modifying the string with a specified function.
  - `ft_striteri`: Iterates through a string, enabling character and index manipulation.

- **Memory Management**:
  - `ft_calloc`: Memory allocation.
  - `ft_memset`: Write a byte to a byte string.
  - `ft_bzero`: Write zeroes to a byte string.
  - `ft_memcpy`: Copy memory area.
  - `ft_memmove`: Copy byte string.
  - `ft_memchr`: Locate byte in byte string.
  - `ft_memcmp`: Compare byte string.
  - `ft_strdup`: Save a copy of a string (with malloc).

- **Numeric Conversion**:
  - `ft_atoi`: Convert the ASCII string to an integer.
  - `ft_itoa`: Convert integer to ASCII string.

- **File Descriptor Output**:
  - `ft_putchar_fd`: Output a character to the given file.
  - `ft_putstr_fd`: Output string to the given file.
  - `ft_putendl_fd`: Output string to given file with newline.
  - `ft_putnbr_fd`: Output integer to the given file.
