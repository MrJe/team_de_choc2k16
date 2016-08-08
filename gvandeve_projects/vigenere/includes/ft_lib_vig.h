#ifndef FT_LIB_VIG_H
# define FT_LIB_VIG_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_encrypt(char *str, char *key);
char	*ft_decrypt(char *str, char *key);
void	ft_print_encrypt(char *str, char*key);
void	ft_print_decrypt(char *str, char*key);

#endif
