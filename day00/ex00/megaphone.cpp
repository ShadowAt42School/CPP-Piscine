#include <iostream>
#include <cctype>

void ft_toUpper(char *str) {
	while (*str) {
		std::cout << (char)std::toupper(*str);
		str++;
	}
}

int main(int argc, char const *argv[]) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << '\n';
		return 0;
	}
	argc--;
	argv++;
	while (*argv) {
		ft_toUpper((char*)*argv);
		argv++;
	}
	std::cout << "\0" << '\n';
	return 0;
}
