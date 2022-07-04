#include <stdio.h>

int gauss(int n)
{
	return (n * (n + 1)) / 2;
}

int main(int argc, char *argv[])
{
	int n = 20, form, i, temp;

	form = 0;
	for (i = 1; i <= (n - n%2) / 2; ++i) {
		form += i;
	}
	
	form *= 2;
	form += n/2 + n%2;

	temp = (n/2 + n%2) + gauss((n - n%2) / 2) * 2;

	printf("Gauss: %d\n", temp);
	printf("Form: %d\n", form);

	return 0;
}
