char malo_u_veliko(char z)
{
	char c;
	c= (z >= 'a' && z <= 'z') ? ('A' + z - 'a') : z;
	return c;
}

int main(void)
{
	char malo, veliko;
	printf("Unesite malo slovo: ");
	scanf("%c", &malo);
	veliko = malo_u_veliko(malo);
	printf("\nUneseno slovo pretvoreno u veliko = %c\n",veliko);
	return 0;
}
