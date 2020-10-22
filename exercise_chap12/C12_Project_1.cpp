#include<stdio.h>
void string_input(char str[])
{
	char c;
	int i = 0;
	c = getchar();
	while (c != '\n')
	{
		str[i++] = c;
		c = getchar();
	}
	str[i] = '\0';
}
// void reverse_string(char str[])
// {
//  	char* p = str;
//	int size = sizeof(str) / 4;
//	for (p = str; p < str + size / 2; p++)
//	{
//
//	}
// }

int main()
{
	char str[1000] = "";
	char* p;
	char c;
	int i = 0;
	printf("\nLet's input string: ");
	//string_input(&str[0]);
	p = str;
	c = getchar();
	while (c != '\n')
	{
		*p++ = c;
		c = getchar();
	}
	p--;
	printf("\n");
	while (p >= str)
	{
		putchar(*p--);
	}
	return 0;
}