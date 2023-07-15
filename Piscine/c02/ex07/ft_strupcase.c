#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str [i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return str;
}

int main()
{
    char str[] = "asadadjoaashaojds";
    ft_strupcase(str);

    printf(str);
}

//output
//ASADADJOAASHAOJDS

//jOS JEDAN PRIMJER MALIH U VELIKA SLOVA
/*
char malo_u_veliko(char z)
{
char c;
c= (z >= ’a’ && z <= ’z’) ? (’A’ + z - ’a’) : z;
return c;
}
*/
//OVO JOS NISAM ISPROBALA
/*
#include <stdio.h>
#include <ctype.h>
// kopiranje ulaza na izlaz
int main(void) 
{
	int c;
	c=getchar();
	while(c!=EOF) 
	{
		putchar(toupper(c));
		c=getchar();
	}
	return 0;
}

Funkcija toupper je deklarirana u datoteci zaglavlja <ctype.h>. Ona uzima
varijablu tipa char i ako se radi o slovu pretvara malo slovo u veliko. Sve
druge znakove ostavlja na miru
*/
