#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>
#include "libft.h"

int main(void)
{
	int nbr = 0;
	char s[5] = "abc";
	char satoi1[10] = "111";
	char satoi[3] = "22";
	char *ptr, *ptr1;
	ft_putstr(s);
	ft_putendl(s);
	ptr = ft_strdup("lol");
	ptr1 = strdup("lol");
	printf("\nft_strdup(\"lol\") = %s\nstrdup(\"lol\") = %s\n", ptr, ptr1);
	ft_putchar('1');
	ft_putchar('\n');
	ft_putchar('2');
	ft_putchar('\n');
	ft_putchar('3');
	ft_putchar('\n');
	printf("strlen(%s) = %d \n", s, ft_strlen(s));
	ft_putchar('4');
	ft_putchar('\n');
	ft_putnbr(nbr);
	ft_putchar('5');
	ft_putchar('\n');
	ft_putchar('\n');
	ft_putchar('6');
	ft_putchar('\n');
	printf("atoi(%s) = %d \n", satoi, atoi(satoi));
	ft_putchar('7');
	ft_putchar('\n');
	printf("ft_atoi(%s) = %d \n", satoi, ft_atoi(satoi));
	ft_putchar('8');
	ft_putchar('\n');
	printf("ft_strequ(\"%s\", \"%s\") = %d \n", satoi1, satoi, ft_strequ(satoi1,satoi));
	ft_putchar('9');
	ft_putchar('\n');
	printf("ft_strnequ(\"%s\", \"%s\", 2) = %d \n", satoi1, satoi, ft_strnequ(satoi1,satoi,2));
	printf("strlcat(\"%s\", \"%s\") = %lu \n", satoi1, satoi, strlcat(satoi1, satoi, 2));
	//printf("strncat(\"%s\", \"%s\") = %s \n", satoi1, satoi, strncat(satoi1,satoi, 4));
	//printf("%lu", strlen(satoi1));
	//printf("ft_strncat(\"%s\", \"%s\", 2) = %s \n", satoi1, satoi, ft_strncat(satoi1,satoi, 2));
	//printf("ft_strlcat(\"%s\", \"%s\", 2) = %lu \n", satoi1, satoi, ft_strlcat(satoi1, satoi, 2));
	char src [11]="012a3456a89";
	int ch = 'a';
	char *ach, *ach1;
	ach = strchr(src,ch);
	ach1 = ft_strchr(src,ch);
	if (ach == NULL || ach1 == NULL)
		printf ("Символ в строке не найден\n");
	else
		printf ("Искомый символ в строке на позиции # %s\n STRING %s\n# %s\n STRING %s\n", ach, src, ach1, src);
	ach = strrchr(src,ch);
	ach1 = ft_strrchr(src,ch);
	if (ach == NULL || ach1 == NULL)
		printf ("Символ в строке не найден\n");
	else
		printf ("Искомый символ в строке на позиции # %s\n STRING %s\n# %s\n STRING %s\n", ach, src, ach1, src);
	char s2[] = "ajnsjf_0_abc_1_kajsd";
	int cnst = 11;
	printf("\nstrstr(%s, %s) = %s\nft_strstr(%s, %s) = %s\n", s2, s, strstr(s2, s), s2, s, ft_strstr(s2, s));
	printf("\nstrnstr(%s, %s, %d) = %s\nft_strnstr(%s, %s, %d) = %s\n", s2, s, cnst, strnstr(s2, s, cnst), s2, s, cnst, ft_strnstr(s2, s, cnst));
	printf("\nstrcmp(%s, %s) = %d\nft_strncmp(%s, %s, %d) = %d", s2, s, strcmp(s2, s), s2, s, cnst, ft_strncmp(s2, s, cnst));
	char c = 'a';
	printf("\nisalpha(%c) = %d\nft_isalpha(%c) = %d\n", c, isalpha(c), c, ft_isalpha(c));
	printf("\nmemset(%s, %c, %d) = %s\nft_memset(%s, %c, %d) = %s", s2, c, cnst, memset(s2, c, cnst), s2, c, cnst, ft_memset(s2, c, cnst));
	return(0);
}
