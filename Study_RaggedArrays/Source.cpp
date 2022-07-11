#include<iostream>

int main(int argc, char ** args)
{
	printf("Argc - %i\n", argc);
	for (int i = 0; i < argc; i++)
		printf("Args[%i] = %s\n", i, args[i]);

	system("pause");
	return 0;
}