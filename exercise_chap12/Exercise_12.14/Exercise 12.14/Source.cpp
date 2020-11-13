#include <stdio.h>
#include <stdlib.h>
#define ROW 7
#define COL 24
bool search(const int a[], int n, int key);
void print_row(int arr[ROW][COL],int i);
void find_largest(int a[][COL], int i);
int main()
{
	int temperature[ROW][COL];
	int* p_tr;
	for (p_tr = temperature[0]; p_tr <= &temperature[ROW-1][COL-1]; p_tr++)
	{
		*p_tr = 20 + rand()%(30+1-20);
	}
	for (int i = 0; i < 7; i++)
	{
		print_row(temperature, i);
	}
	for (int i = 0; i < 7; i++)
	{
		find_largest(temperature, i);
	}
	
	return 0;

}
bool search(const int a[], int n, int key)
{
	const int* p;
	for (p = a; p < a + n; p++)
	{
		if (*p == key) return true;
	}
	return false;
}
void print_row(int arr[ROW][COL],int i)
{
	int* p;
	p = arr[i];
	printf("\n");
	while (p++ < arr[i + 1])
	{
		printf(" %d ", *p);
	}
	printf("\n");
}
void find_largest(int a[][COL], int i)
{
	int* p = a[0];
	int max = 0;
	while (p++ < a[i + 1])
	{
		if (*p > max) max = *p;
	}
	printf("\nMax temperature of date %d: %d", i, max);
}