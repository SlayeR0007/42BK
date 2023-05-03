/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <natharav> <Umm_MVP@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:45:20 by <natharav>        #+#    #+#             */
/*   Updated: 2023/05/03 19:38:01 by <natharav>       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

# define CHA_C 'c'
# define CHA_S 's'
# define CHA_P 'p'
# define CHA_D 'd'
# define CHA_I 'i'
# define CHA_U 'u'
# define CHA_X_LOWER 'x'
# define CHA_X_UPPER 'X'
# define CHA_PERCENT '%'
# define STR_NULL "(null)"
//# define STR_FORM_MEMORY "0x"
//# define STR_NULL_FORM_MEMORY "0x0"
//# define STR_ZERO "0"

int		ft_printf(const char *data, ...);
int		to_print(va_list ptr, char *str);
int		ft_putchar(char c);
int		conversion(va_list ptr, char c);
int		get_char(va_list ptr);
int		get_str(va_list ptr);
int		get_ptr(va_list ptr);
//int		get_dec(va_list ptr);
//int		get_int(va_list ptr);
//int		get_unsigned_dec(va_list ptr);
//int		get_hex(va_list ptr, int is_lower);
//int		get_percent(void);
//int		ft_putstr(char *str);
//int		putstr_null(char *str);
//int		putstr_form_memory(char *str);
//int		putstr_null_form_memory(char *str);
//char	*ft_unsigned_tostr(unsigned int n);
//char	*ft_reverse_str(char *ptr, size_t len);
//char	*to_str_hex(unsigned long long nbr, char *str, size_t lenght, int base);
//char	*ft_str_to_upper(char *str);
//char	*make_hex(unsigned long long nbr, int base, char *str);
//size_t	find_digit(unsigned long long nbr, int base);

#endif
