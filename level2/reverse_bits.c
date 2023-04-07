#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		printf("i = %d, res = %d, octet = %d\n",i,res,octet);
		i--;
	}
	return (res);
}


int main()
{
	printf("\n%u\n", reverse_bits('a'));
}
// 0110 0001
// 