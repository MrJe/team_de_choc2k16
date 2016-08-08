/*********************************************/
/**                                         **
 *                                           *
 * Author: Guillaume VANDEVELDE              *
 *                                           *
 **                                         **/
/*********************************************/

#include "ft_lib_vig.h"

char	*ft_encrypt(char *str, char *key)
{
    char    *start_key;
    char    *start_str;

    start_key = key;
    start_str = str;
    while(*str != '\0')
    {
	if(*key == '\0')
	    key = start_key;
	if(*str >= 'A' && *str <= 'Z')
	{
   	    *str = 'A' + (((*str - 'A') + (*key - 'a')) % 26);
	    key++;
	}
	if(*str >= 'a' && *str <= 'z')
	{
	    *str = 'a' + (((*str - 'a') + (*key - 'a')) % 26);
	    key++;
	}
	str++;
    }
    return (start_str);
}

char	*ft_decrypt(char *str, char *key)
{
    char    *start_key;
    char    *start_str;

    start_key = key;
    start_str = str;
    while(*str != '\0')
    {
	if(*key == '\0')
	    key = start_key;
	if(*str >= 'A' && *str <= 'Z')
	{
   	    *str = 'A' + (((*str - 'A') - (*key - 'a')) % 26);
	    if(*str < 'A')
		*str = 'Z' - ('A' - *str) + 1;
	    key++;
	}
	if(*str >= 'a' && *str <= 'z')
	{
	    *str = 'a' + (((*str - 'a') - (*key - 'a')) % 26);
	    if(*str < 'a')
		*str = 'z' - ('a' - *str) + 1;
	    key++;
	}
	str++;
    }
    return (start_str);
}

void	ft_print_encrypt(char *str, char*key)
{
    char    *result;

    ft_putstr("--------- Texte a encrypter ----------");
    ft_putchar('\n');
    ft_putstr(str);
    ft_putchar('\n');
    ft_putstr("--------------------------------------");
    ft_putchar('\n');
    ft_putstr("[Clef d'encryption : ");
    ft_putstr(key);
    ft_putchar(']');
    ft_putchar('\n');
    result = ft_encrypt(str, key);
    ft_putstr("------------- Resultat ---------------");
    ft_putchar('\n');
    ft_putstr(result);
    ft_putchar('\n');
    ft_putstr("--------------------------------------");
    ft_putchar('\n');
}

void	ft_print_decrypt(char *str, char*key)
{
    char    *result;

    ft_putstr("--------- Texte a decrypter ----------");
    ft_putchar('\n');
    ft_putstr(str);
    ft_putchar('\n');
    ft_putstr("--------------------------------------");
    ft_putchar('\n');
    ft_putstr("[Clef de decryption : ");
    ft_putstr(key);
    ft_putchar(']');
    ft_putchar('\n');
    result = ft_decrypt(str, key);
    ft_putstr("------------- Resultat ---------------");
    ft_putchar('\n');
    ft_putstr(result);
    ft_putchar('\n');
    ft_putstr("--------------------------------------");
    ft_putchar('\n');
}
