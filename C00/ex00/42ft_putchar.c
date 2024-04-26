#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

int main() {
	char caracter = 'c';
	ft_putchar(caracter);
	return 0;
}
