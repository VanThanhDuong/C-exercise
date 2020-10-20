#include <stdio.h>
#define N 10
void print_arr(int arr[N][N])
{
	int* k;
	for (k = arr[0]; k <= &arr[N-1][N-1]; k++)
	{
		if ((k - &arr[0][0]) % (N) == 0)
		{
			printf("\n");
			printf(" %d ", *k);
		}
		else printf(" %d ", *k);
	}
}
int main()
{
	int ident[N][N];
	int* p;
	for (p = ident[0]; p <= &ident[N-1][N-1]; p++)
	{
		if ((p - &ident[0][0]) % (N+1) == 0) *p = 1;
		else *p = 0;
	}
	print_arr(ident);
	return 0;
}