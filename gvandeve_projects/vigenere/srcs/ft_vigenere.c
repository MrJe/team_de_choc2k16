/*********************************************/
/**                                         **
 *                                           *
 * Author: Guillaume VANDEVELDE              *
 *                                           *
 **                                         **/
/*********************************************/

#include "ft_lib_vig.h"

int	main(int ac, char **av)
{
    if(ac == 4)
    {
	if(av[1][0] == '-')
	{
	    if(av[1][1] == 'e')
		ft_print_encrypt(av[2], av[3]);
	    if(av[1][1] == 'd')
		ft_print_decrypt(av[2], av[3]);
	    else
		return (1);
	}
	return (0);
    }
    return (1);
}
