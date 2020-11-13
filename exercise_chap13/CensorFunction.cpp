//************************************************************
//* Author: Thanh Van Duong (^_^) Nov 13 2020
//* Description: censor function that replace "foo" by "xxx"
//************************************************************

#include<stdio.h>
#include<string.h>

int str_search(const char* sample, const char* src_str)
{
	int N = strlen(sample);
	int M = strlen(src_str);
	if (N > M) return -1;
	for (int i = 0; i < M; i++)
	{
		int j;
		for (j = 0; j < N; j++)
			if (src_str[i + j] != sample[j]) break;
		if (j == N) return i;
	}

	return -1;
}

void replace_function(const char* rpl_str, char* src_str, int index)
{
	for (int i = index; i < index + strlen(rpl_str) ; i++)
		src_str[i] = 'x';
}

void censor(char* sample, char* str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		replace_function(sample, str, str_search(sample, str));
	}
}

int main()
{
	char sample[] = "ha";
	char src_string[] = "hay yeu em cho den khi anh cuoi haha and hay qua";
	//string_search(sample, src_string);
	censor(sample, src_string);
	puts(src_string);
	return 0;
}