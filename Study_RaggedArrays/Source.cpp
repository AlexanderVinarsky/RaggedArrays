#include<iostream>

int main(int argc, char ** args)
{
	for (int i = 0; i < argc; i++)
	{
		if (strcmp(args[i], "start") == 0)
		{
			printf("Lets start!!!\n");
			system("pause");
			printf("Start!");
		}
		if (strcmp(args[i], "whereami") == 0)
		{
			printf("You are here: %s", args[0]);
			system("pause");
			exit(0);
		}
	}

	printf("Wrong command.\n");

	system("pause");
	return 0;
}