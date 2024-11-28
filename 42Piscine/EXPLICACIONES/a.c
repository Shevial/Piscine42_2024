#include <stdio.h>

void asdf(int a, int *b)
{
	printf("El valor de a es %d\nEl valor de b es %d\nLa dirección de a es %p\nLa dirección de b es %p\n", a, *b, &a, b);
}

int main()
{
	int a = 1;
	asdf(a, &a);
	return 0;
}
