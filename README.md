# C-programming printf partner project

[Holberton C-Programming Group Project #1](https://github.com/Jilroge7/printf.git)

## This repo contains the group project "printf" with associated tasks:
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life:
	* Write a function that produces output according to a format.
		* Prototype: int _printf(const char *format, ...);
		* Returns: the number of characters printed (excluding the null byte used to end output to strings)
		* write output to stdout, the standard output stream
		* format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
			* c
			* s
			* %
		* You dont have to reproduce the buffer handling of the C library printf function
		* You dont have to handle the flag characters
		* You dont have to handle field width
		* You dont have to handle precision
		* You dont have to handle the length modifiers
1. Education is when you read the fine print. Experience is what you get if you don't:
	* Handle the following conversion specifiers:
		* d
		* i
		* You dont have to handle the flag characters
		* You dont have to handle field width
		* You dont have to handle precision
		* You dont have to handle the length modifiers
2. Just because it's in print doesn't mean it's the gospel:
	* Create a man page for your function.
		* file: man_3_printf
## Additional files:
	* holberton.h - header file for function prototypes.
	* _printf.c - main project function file
	* man_3_printf - man page for project printf function.
	* use_functions.c - file containing 5 functions used for printf implementation:
		* parser
		* _write_char
		* _memcpy
		* write_base
		* print_number
	* use_functions3.c -file containing 5 functions used for printf implementation:
		* print_char
		* print_string
		* print_percent
		* print_integer
