#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <lista.h>

#define END "\0"

void padln(int n, int size, char c, char *dest)
{
	char tmp[size];
	sprintf(tmp, "%d", n);

	int len = strlen(tmp);
	int diff = size - len;

	for (int i = 0; i < size; i++)
		if (i < diff)
			dest[i] = c;
		else
			dest[i] = tmp[i - diff];

	dest[size] = '\n';
}

int main()
{
	struct list l;
	init_list(&l);

	push(&l, 1);
	push(&l, 2);
	push(&l, 3);
	push(&l, 4);

	printf("%d\n", pop(&l));
	printf("%d\n", pop(&l));
	printf("%d\n", pop(&l));

	delete_list(&l);

	// char rst[5];
	// padln(323, 4, '0', rst);
	// printf("%s\n", rst);

	// char *s = "\0";
	// if (strncmp(s, END, 1) == 0)
	// 	printf("IGUAIS\n");
	// else
	// 	printf("DIFF\n");

	// printf("%d\n", strlen(s));

	return 0;
}

// valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose ./executable exampleParam1