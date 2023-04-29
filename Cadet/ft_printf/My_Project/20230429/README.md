
# ft_printf

this function will mimic the original printf()

## Common Instructions
- written in C
- Norm, Main+Bonus
- properly free heap, No leak
- Makefile
	- flags -Wall, -Wextra, -Werror, cc
	- not relink = ????
	- rules $(NAME), all, clean, fclean and re.
	- If use use libft compile its Makefile first priority.
- Only work in git repository
- Stop suddenly, if any error happens during Eval.

## Mandatory part
 - Name: libftprintf.a
 - External functs: malloc, free, write, va_start, va_arg, va_copy, va_end (variadic functions)
 - Description : Write a library that contains ft_printf(), a

### function that will mimic the original printf()
- prototype: int ft_printf(const char *, ...);

### requirements:
- Don’t implement the buffer management of the original printf().
    (buffer = A temporary storage area)
- handle the following conversions: cspdiuxX%
- will be compared against the original printf().
- use the command ar to create your library.
- libftprintf.a has to be created at the root of your repository.
- %c Prints a single character
- %s Prints a string (as defined by the common C convention).
- %p The void * pointer argument has to be printed in hexadecimal format.
- %d Prints a decimal (base 10) number.
- %i Prints an integer in base 10.
- %u Prints an unsigned decimal (base 10) number.
- %x Prints a number in hexadecimal (base 16) lowercase format.
- %X Prints a number in hexadecimal (base 16) uppercase format.
- %% Prints a percent sign.

