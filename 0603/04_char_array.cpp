/*
	4. ¹è¿­ ch[26] ={'A','B',,,,,,'Z'};
	ABCD............WXYZ
	BCDE.............XYZA
	CDEF.............YZAB
	.....................
	ZABC.............VWXY
*/
#include <stdio.h>
int main()
{
	char arr_c[26] = { 'A','B','C','D','E','F','G','H','I',
   'J','K','L','M','N','O','P','Q','R',
   'S','T','U','V','W','X','Y','Z' };
	
	char temp;
	for (int x = 0; x < 26; x++)
	{
		for (char n = 0; n < 26; n++)
		{
			printf("%c ", arr_c[n]);
		}
		printf("\n");

		temp = arr_c[0];
		for (char i = 0; i < 25; i++)
		{
			arr_c[i] = arr_c[i + 1];
		}
		arr_c[25] = temp;
	}
}